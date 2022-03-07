#ifndef SIGNFINDER_HELPERS_HPP
#define SIGNFINDER_HELPERS_HPP

#include "SignFinder_base.hpp"

// "final" indicates that another class can't derive from this class.
// This class inherits from SignFinder_base, which means it gets all the members variables and
// functions of the parent class.
class SignFinder_helpers final : public SignFinder_base
{
public:
    // "noexcept" means that this function doesn't throw exceptions.
    // I can either say `return-type identifier (argument declarations)` or
    // `auto identifier (argument declarations) -> return-type`
    static auto getZodiacSign(const int& year) noexcept -> std::string;
};

#endif  // SIGNFINDER_HELPERS_HPP
