#include <string>
#include <unordered_map>

#include "SignFinder_helpers.hpp"


static std::unordered_map<int, std::string> ZodiacAnimals
        {
                {1, "Rat"},
                {2, "Ox"},
                {3, "Tiger"},
                {4, "Rabbit"},
                {5, "Dragon"},
                {6, "Snake"},
                {7, "Horse"},
                {8, "Goat"},
                {9, "Monkey"},
                {10, "Rooster" },
                {11, "Dog" },
                {12, "Pig"}
        };

// 1998: 3, tiger
// 2020: 1, rat
// 2021: 2, Ox
// 2022: 3, Tiger
const std::string SignFinder_helpers::getZodiacSign(const int &year)
{
    const int animalNumber = (year + 9) % 12;
    std::string animal = ZodiacAnimals[animalNumber];
    return animal;
}
