#include <iostream>
#include "SignFinder_helpers.hpp"


int main()
{
    std::vector<int> years = {2022, 2021, 1998};
    for (auto year : years)
    {
        std::cout << year << ": Year of the " << SignFinder_helpers::getZodiacSign(year) << std::endl;
    }
    return 0;
}
