#include "SignFinder_helpers.hpp"


enum class ZodiacAnimal
        {
            Rat = 1,
            Ox = 2,
            Tiger = 3,
            Rabbit = 4,
            Dragon = 5,
            Snake = 6,
            Horse = 7,
            Goat = 8,
            Monkey = 9,
            Rooster = 10,
            Dog = 11,
            Pig = 12
        };


// 1998: 3, tiger
// 2020: 1, rat
// 2021: 2, Ox
// 2022: 3, Tiger
ZodiacAnimal SignFinder_helpers::getZodiacSign(const int &year)
{
    const int animalNumber = (year + 9) % 12;
    ZodiacAnimal animal = static_cast<ZodiacAnimal>(animalNumber);
    std::vector<ZodiacAnimal> animal_vector
    return animal;
}
