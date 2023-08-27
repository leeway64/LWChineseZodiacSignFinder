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
        std::cout << "Print intro here" << std::endl;
    }
}
