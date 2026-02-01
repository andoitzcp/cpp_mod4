#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal(void): _type("")
{
    std::cout << "Default WrongAnimal constructor called" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other): _type(other._type)
{
    std::cout << "Copy WrongAnimal constructor called" << std::endl;
    return ;
}

WrongAnimal WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "Assigment WrongAnimal operator called" << std::endl;
    if (this == &other)
        return other;
    this->_type = other._type;
    return *this;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
    return ;
}

const std::string WrongAnimal::getType(void) const
{
    return this->_type;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "** (WrongAnimal Sounds) **" << std::endl;
    return ;
}


