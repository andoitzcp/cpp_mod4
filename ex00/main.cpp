#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal *meta = new Animal();
    const Animal *i = new Dog();
    const Animal *j = new Cat();
    const WrongAnimal *k = new WrongCat();

    (void)k;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    meta->makeSound();
    i->makeSound();
    j->makeSound();
    k->makeSound();

    delete(meta);
    delete(i);
    delete(j);
    delete(k);
    return 0;
}
