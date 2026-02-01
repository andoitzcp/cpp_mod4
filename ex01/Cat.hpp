#ifndef CAT_H_
#define CAT_H_

#include "Animal.hpp"
#include "Brain.hpp"
#include <ostream>

class Cat: public Animal
{
    public:
        Cat(void);
        Cat(const Cat &other);
        Cat operator=(const Cat &other);
        ~Cat(void);

        void makeSound(void) const;
        Brain *getBrain(void) const;


    private:
        Brain* _brain;
};

std::ostream &operator<<(std::ostream &os, const Cat& cat);


#endif // CAT_H_
