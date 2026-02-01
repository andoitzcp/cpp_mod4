#include "Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain(void): _type("")
{
    std::cout << "Default Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = "idea";
    return ;
}

Brain::Brain(std::string& type): _type(type)
{
    std::cout << type << " Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = "idea";
    return ;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Copy " << this->_type << " Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = other._ideas[i];
    this->_type = other._type;
    return ;
}

Brain Brain::operator=(const Brain& other)
{
    std::cout << "Assigment " << this->_type << " Brain operator called" << std::endl;
    if (this == &other)
        return (other);
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = other._ideas[i];
    this->_type = other._type;
    return *this;
}

Brain::~Brain()
{
    std::cout << this->_type<< " Brain destructor called" << std::endl;
    return ;
}

std::string Brain::getIdea(int index) const
{
    if (index < 0 || index >= 100)
        return "This is beyond this " + this->_type + " brain limits";
    return (this->_ideas[index]);
}

void Brain::setIdea(std::string idea, int index)
{
    if (index < 0 || index >= 100)
        return ;
    this->_ideas[index] = idea;
}
