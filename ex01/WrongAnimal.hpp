#ifndef WRONGANIMAL_H_
#define WRONGANIMAL_H_

#include <string>

class WrongAnimal
{
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal& other);
        WrongAnimal& operator=(const WrongAnimal& other);
        virtual ~WrongAnimal(void);

        const std::string getType(void) const;
        void makeSound(void) const;

    protected:
        std::string _type;
};


#endif // WRONGANIMAL_H_
