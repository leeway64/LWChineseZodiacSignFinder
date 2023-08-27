#include <iostream>
#include "Subclass.hpp"


Subclass::Subclass(){}

Subclass::~Subclass(){   
    delete node;
    
    std::cout << "calculate current year's zodiac animal" << std::endl;
}

void Subclass::message(Success s)
{
    if (s == Success::success)
    {
        std::cout << "Zodiac signs successfully found" << std::endl;        
    }
}
