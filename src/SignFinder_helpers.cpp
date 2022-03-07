#include "SignFinder_helpers.hpp"


// 1998: 3, tiger
// 2020: 1, rat
// 2021: 2, Ox
// 2022: 3, Tiger
std::string SignFinder_helpers::getZodiacSign(const int &year) noexcept
{
    // animalNumber is a lambda, an unnamed function.
    const auto animalNumber = [](const int &year) -> int
    {
        return (year + 9) % 12;
    };
    const std::string animal = ZodiacAnimals[animalNumber(year)];
    return animal;
}
