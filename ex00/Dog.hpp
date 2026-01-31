#ifndef DOG_H_
#define DOG_H_

#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog(void);
        Dog(const Dog &other);
        Dog operator=(const Dog &other);
        ~Dog(void);

        void makeSound(void) const;
    
};


#endif // DOG_H_
