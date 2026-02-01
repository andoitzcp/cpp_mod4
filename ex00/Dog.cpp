#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

Dog::Dog(void): Animal()
{
    this->_type = "Dog";
    std::cout << "Default Dog constructor called" << std::endl;
    return ;
}

Dog::Dog(const Dog& other): Animal(other)
{
    std::cout << "Copy Dog constructor called" << std::endl;
    return ;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
        Animal::operator=(other);
    std::cout << "Assigment Dog operator called" << std::endl;
    return *this;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    return ;
}

void Dog::makeSound(void) const
{
    std::cout << "** Woof! Woof! **" << std::endl;
    return ;
}
