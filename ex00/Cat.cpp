#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>

Cat::Cat(void): Animal()
{
    this->_type = "Cat";
    std::cout << "Default Cat constructor called" << std::endl;
    return ;
}

Cat::Cat(const Cat& other): Animal(other)
{
    std::cout << "Copy Cat constructor called" << std::endl;
    return ;
}

Cat Cat::operator=(const Cat& other)
{
    std::cout << "Assigment Cat operator called" << std::endl;
    if (this == &other)
        return other;
    this->_type = other._type;
    return *this;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    return ;
}

void Cat::makeSound(void) const
{
    std::cout << "** Meowwww... **" << std::endl;
    return ;
}

