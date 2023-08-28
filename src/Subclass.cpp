#include <iostream>
#include "Subclass.hpp"


Subclass::Subclass(){}

Subclass::~Subclass(){   
    delete node;
    
    std::cout << "Happy Lunar New Year!" << std::endl;
}

void Subclass::message(Success s)
{
    if (s == Success::success)
    {
        std::cout << "\nZodiac signs successfully found" << std::endl;        
    }
}
