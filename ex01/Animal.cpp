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

Animal& Animal::operator=(const Animal &other)
{
    if (this != &other)
        this->_type = other._type;
    std::cout << "Assigment Animal operator called" << std::endl;
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
