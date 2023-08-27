#include <iostream>
#include <vector>
#include <filesystem>
#include <fstream>

#include <toml11/toml.hpp>
#define FMT_HEADER_ONLY
#include "../fmt/include/fmt/format.h"

#include "Subclass.hpp"
#include "SignFinder_helpers.hpp"

void printHelp()
{
    Subclass sub = Subclass();
    sub.node = new InfoNode();
    sub.node->information = "No input TOML file found";
    sub.node->information += "Creating a new TOML file";
    std::cout << sub.node->information << std::endl;
}

int main()
{
    const std::string input_file_name = "input_file.toml";
    const std::filesystem::path input_file{ input_file_name };

    // If a TOML file doesn't exist, create one and exit
    if (!std::filesystem::exists(input_file))
    {
        printHelp();

        std::ofstream output(input_file_name);
        output << "title = \"TOML file for user input\"" << std::endl;
        output << std::endl;
        output << "[User_input]" << std::endl;
        output << "# Enter the years in which you would like to find the corresponding Chinese zodiac signs for" << std::endl;
        output << "years = []" << std::endl;
        output.close();
    }
    else
    {
        // This is running on another thread. This thread will print the help message.
        std::thread thrd( [&] { fmt::print("\nEntered years and corresponding zodiac signs:\n"); } );
        // Wait for thread to complete work. Blocks main thread until worker thread has completed.
        thrd.join();
        
        // The new keyword dynamically allocates memory for an object and creates that object. It
        // returns a pointer to that dynamically allocated object.
        Base * b = new Base();
        Base * sub = new Subclass();
        
        // Get the vector of years from the TOML file.
        toml::value toml_data = toml::parse("input_file.toml");
        const std::vector<int> years = toml::find<std::vector<int>>(toml_data, "User_input", "years");

        for (const auto& year: years) {
            std::string ZodiacSign = SignFinder_helpers::getZodiacSign(year);
            std::cout << fmt::format("\t{}: Year of the {}", year, ZodiacSign) << std::endl;
        }
    }
    std::exit(EXIT_SUCCESS);
}
