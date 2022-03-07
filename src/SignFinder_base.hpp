#ifndef SIGNFINDER_BASE_H
#define SIGNFINDER_BASE_H

class Base {
private:
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
};


#endif //LWCHINESEZODIACSIGNFINDER_BASE_H
