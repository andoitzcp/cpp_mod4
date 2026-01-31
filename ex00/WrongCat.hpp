#ifndef WRONGCAT_H_
#define WRONGCAT_H_

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(const WrongCat &other);
        WrongCat operator=(const WrongCat &other);
        ~WrongCat(void);

        void makeSound(void) const;
    
};


#endif // WRONGCAT_H_
