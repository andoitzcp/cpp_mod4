#include "Animal.hpp"

#include <iostream>

Animal::Animal(void): _type("")
{
    std::cout << "Default Animal constructor called" << std::endl;
    return ;
}

Animal::Animal(const Animal &other): _type(other._type)
{
    std::cout << "Copy Animal constructor called" << std::endl;
    return ;
}

Animal Animal::operator=(const Animal &other)
{
    std::cout << "Assigment Animal operator called" << std::endl;
    if (this == &other)
        return other;
    this->_type = other._type;
    return *this;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
    return ;
}

const std::string Animal::getType(void) const
{
    return this->_type;
}

void Animal::makeSound(void) const
{
    std::cout << "** (Animal Sounds) **" << std::endl;
    return ;
}
