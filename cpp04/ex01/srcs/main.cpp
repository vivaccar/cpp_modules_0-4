#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main (void) 
{
    {
        std::cout << ":::::::: SUBJECT TEST ::::::::" << std::endl;
        
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        delete j;//should not create a leak
        delete i;

        //return 0;
    }

    std::cout << std::endl;

    {
        std::cout << ":::::::: MY TESTS ::::::::" << std::endl;
        
        const int size = 10;

        Animal *Animals[size];
        for (int i = 0; i < 10; i++)
        {
            if (i < size / 2)
                Animals[i] = new Dog;
            else
                Animals[i] = new Cat;
        }

        std::cout << std::endl;
        
        for (int i = 0; i < size; i++)
            Animals[i]->makeSound();

        std::cout << std::endl;
        
        for (int i = 0; i < size; i++)
            delete Animals[i];
    }
}