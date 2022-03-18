#include "SignFinder_helpers.hpp"


std::string SignFinder_helpers::getZodiacSign(const int &year) noexcept
{
    // 1998: 3, tiger
    // 2020: 1, rat
    // 2021: 2, Ox
    // 2022: 3, Tiger
    // animalNumber is a lambda, an unnamed function.
    const auto animalNumber = [](const int &year) -> int
    {
        // If the number is 0, then it should be converted to 12.
        const int number = (year + 9) % 12;
        return number ? number : 12;
    };
    const std::string animal = ZodiacAnimals[animalNumber(year)];
    return animal;
}
