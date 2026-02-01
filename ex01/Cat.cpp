#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat(void): Animal()
{
    std::cout << "Default Cat constructor called" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain(this->_type);
    return ;
}

Cat::Cat(const Cat& other): Animal(other)
{
    std::cout << "Copy Cat constructor called" << std::endl;
    this->_brain = new Brain(*(other._brain));
    return ;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        *(this->_brain) = *(other._brain);
    }
    std::cout << "Assigment Cat operator called" << std::endl;
    return *this;
}

Cat::~Cat(void)
{
    delete this->_brain;
    std::cout << "Cat destructor called" << std::endl;
    return ;
}

void Cat::makeSound(void) const
{
    std::cout << "** Meowwww... **" << std::endl;
    return ;
}

Brain* Cat::getBrain(void) const
{
    return this->_brain;
}


std::ostream &operator<<(std::ostream &os, const Cat& cat)
{

    std::cout << "Cat brain contents:\n";
    for (int i = 0; i < 100; i++)
    {
        os << cat.getBrain()->getIdea(i) << "\n";
    }
    os << std::endl;
    return os;
}
