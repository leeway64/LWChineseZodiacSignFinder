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
        output << "[User input]" << std::endl;
        output << "# Enter the years in which you would like to find Chinese zodiac signs for in an array." << std::endl;
        output << "years = []" << std::endl;
        output.close();
    }
    else
    {
        auto toml_input = toml::parse(input_file_name);
        const std::vector<int> years = toml::find<std::vector<int>>(toml_input, "years");

        for (auto year: years) {
            std::string ZodiacSign = SignFinder_helpers::getZodiacSign(year);
            std::cout << fmt::format("{}: Year of the {}", year, ZodiacSign) << std::endl;
        }
    }
    return 0;
}
