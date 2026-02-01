#ifndef DOG_H_
#define DOG_H_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    public:
        Dog(void);
        Dog(const Dog &other);
        Dog& operator=(const Dog &other);
        ~Dog(void);

        void makeSound(void) const;
        Brain *getBrain(void) const;
    
    private:
        Brain* _brain;

};

std::ostream &operator<<(std::ostream &os, const Dog& dog);

#endif // DOG_H_
