#include <iostream>
#include <string>

#include "Base.hpp"

Base::Base(){}

std::string getInfo(const Base* b)
{
    return b->info;
}

void setInfo(Base* b, std::string information)
{
    b->info = information;
}

void Base::message(Success s)
{
    if (s == Success::success)
    {
        // Raw string literal
        std::cout << R"(Welcome to LWChineseZodiacSignFinder!)" << std::endl;
    }
}
