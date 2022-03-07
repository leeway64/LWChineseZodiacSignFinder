#include <iostream>
#include <vector>
#include <filesystem>
#include <fstream>

#include <toml.hpp>
#include <fmt/core.h>

#include "SignFinder_helpers.hpp"


int main()
{
    const std::string input_file_name = "input_file.toml";

    const std::filesystem::path input_file{ input_file_name };
    if (!std::filesystem::exists(input_file))
    {
        std::cout << "No input TOML file found" << std::endl;
        std::cout << "Creating a new TOML file" << std::endl;

        std::ofstream output(input_file_name);
        output << "title = \"TOML file for user input\"" << std::endl;
        output << std::endl;
        output << "[User input]" << std::endl;
        output << "# Enter the years in which you would like to find Chinese zodiac signs for in an array." << std::endl;
        output << "years = []" << std::endl;
        output.close();
    }
    else
    {
//        toml::value toml_data = toml::parse("input_file.toml");

//        const std::vector<int> years = toml::find<std::vector<int>>(toml_data, "years");
        const std::vector<int> years = {1998, 2022};
        for (auto year: years) {
            std::string ZodiacSign = SignFinder_helpers::getZodiacSign(year);
            std::cout << year << ": Year of the " << ZodiacSign << std::endl;
//            std::cout << fmt::format("{}: Year of the {}", year, ZodiacSign) << std::endl;
        }
    }
    return 0;
}
