#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <string>

class Animal
{
    public:
        Animal(void);
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual ~Animal(void);

        virtual const std::string getType(void) const;
        virtual void makeSound(void) const;

    protected:
        std::string _type;
};


#endif // ANIMAL_H_
