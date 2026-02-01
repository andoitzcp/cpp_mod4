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

    return 0;
}
