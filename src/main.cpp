#include <iostream>
#include <vector>
#include <filesystem>
#include <fstream>

#include <toml11/toml.hpp>
#define FMT_HEADER_ONLY
#include "../fmt/include/fmt/format.h"

#include "SignFinder_helpers.hpp"


int main()
{
    const std::string input_file_name = "input_file.toml";
    const std::filesystem::path input_file{ input_file_name };

    // If a TOML file doesn't exist, create one and exit
    if (!std::filesystem::exists(input_file))
    {
        std::cout << "No input TOML file found" << std::endl;
        std::cout << "Creating a new TOML file" << std::endl;

        std::ofstream output(input_file_name);
        output << "title = \"TOML file for user input\"" << std::endl;
        output << std::endl;
        output << "[User_input]" << std::endl;
        output << "# Enter the years in which you would like to find Chinese zodiac signs for in an array." << std::endl;
        output << "years = []" << std::endl;
        output.close();
    }
    else
    {
        // Get the vector of years from the TOML file.
        toml::value toml_data = toml::parse("input_file.toml");
        const std::vector<int> years = toml::find<std::vector<int>>(toml_data, "User_input", "years");

        for (const auto& year: years) {
            std::string ZodiacSign = SignFinder_helpers::getZodiacSign(year);
            std::cout << fmt::format("{}: Year of the {}", year, ZodiacSign) << std::endl;
        }
    }
    return 0;
}
