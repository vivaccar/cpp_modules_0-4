#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

int main(void) 
{
    Animal *a1;
    Animal *a2;
    a1 = new Dog;
    a1->makeSound();

    std::cout << std::endl; 
    a2 = new Cat;
    a2->makeSound();

    std::cout << std::endl;
    delete a1;
    delete a2;


    std::cout << std::endl << std::endl;

    WrongAnimal *a3;
    WrongCat    *a4;

    a3 = new WrongCat;
    a3->makeSound();

    std::cout << std::endl;
    a4 = new WrongCat;
    a4->makeSound();
    std::cout << std::endl;

    delete a3;
    delete a4;
}