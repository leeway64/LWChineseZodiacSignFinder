#ifndef SIGNFINDER_BASE_H
#define SIGNFINDER_BASE_H

#include <unordered_map>
#include <string>

class SignFinder_base {
public:
    /// A map with each number (1-12) corresponding with the appropriate animal.
    /// i.e., 3->Tiger, 5->Dragon, etc.
    static std::unordered_map<int, std::string> ZodiacAnimals;
};

#endif  // SIGNFINDER_BASE_H
