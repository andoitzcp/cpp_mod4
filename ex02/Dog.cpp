#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

Dog::Dog(void): Animal()
{
    this->_type = "Dog";
    std::cout << "Default Dog constructor called" << std::endl;
    this->_brain = new Brain(this->_type);
    return ;
}

Dog::Dog(const Dog& other): Animal(other)
{
    std::cout << "Copy Dog constructor called" << std::endl;
    this->_brain = new Brain(*(other._brain));
    return ;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        *(this->_brain) = *(other._brain);
    }
    std::cout << "Assigment Dog operator called" << std::endl;
    return *this;
}

Dog::~Dog(void)
{
    delete this->_brain;
    std::cout << "Dog destructor called" << std::endl;
    return ;
}

void Dog::makeSound(void) const
{
    std::cout << "** Woof! Woof! **" << std::endl;
    return ;
}

Brain* Dog::getBrain(void) const
{
    return this->_brain;
}

std::ostream &operator<<(std::ostream &os, const Dog& dog)
{

    std::cout << "Dog brain contents:\n";
    for (int i = 0; i < 100; i++)
    {
        os << dog.getBrain()->getIdea(i) << "\n";
    }
    os << std::endl;
    return os;
}
