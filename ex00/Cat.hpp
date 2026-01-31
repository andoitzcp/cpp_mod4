#ifndef CAT_H_
#define CAT_H_

#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat(void);
        Cat(const Cat &other);
        Cat operator=(const Cat &other);
        ~Cat(void);

        void makeSound(void) const;
    
};


#endif // CAT_H_
