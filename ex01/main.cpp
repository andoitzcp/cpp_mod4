#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    {
        std::cout << "== TEST ANIMAL ARRAY ==\n" << std:: endl;
        Animal* animal[10];
        for (int i = 0; i < 10; i++)
        {
            if (i % 2)
                animal[i] = new Cat();
            else
                animal[i] = new Dog();
        }

        for (int i = 0; i < 10; i++)
        {
            delete animal[i];
        }
    }
    {
        std::cout << "\n== TEST DEEP COPY ==\n" << std:: endl;
        // if it is not a deep copy the destructor in cat class should delete
        // the Brain * attribute.
        Cat cat;
        {
            Cat tmp = cat;
        }
        {
            Cat tmp(cat);
        }
        std::cout << cat;
        Dog dog;
        {
            Dog tmp = dog;
        }
        {
            Dog tmp(dog);
        }
        std::cout << dog;
    }
    {
        std::cout << "\n== TEST LEAK==\n" << std:: endl;
        // if it is not a deep copy the destructor in cat class should delete
        // the Brain * attribute.
        Cat cat;
        Cat c;
        std::cout << "\nFLAG: constructor copy\n" << std::endl;
        Cat b = cat;
        std::cout << "\nFLAG: operador asignacion\n" << std::endl;
        c = cat;
    }

    return 0;
}
