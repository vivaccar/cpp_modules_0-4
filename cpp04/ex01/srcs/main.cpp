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

        Brain *brain;
        Brain *brain2 = Animals[0]->getBrain();
        brain = Animals[5]->getBrain();

        brain->setIdea(1, "i have no ideas today");
        brain->setIdea(10, "hello world");

        
        std::cout << brain->getIdeas(1) << std::endl;
        std::cout << brain->getIdeas(10) << std::endl;

        brain2 = brain;

        std::cout << "\n\n";

        std::cout << brain2->getIdeas(1) << std::endl;
        std::cout << brain2->getIdeas(10) << std::endl;

        std::cout << std::endl;

/*         Dog *dog = new Dog;
        Brain *dog_brain = brain;
        Dog *dog2 = new Dog(*dog);
        Brain *dog2_brain = dog2->getBrain();
        std::cout << dog2_brain->getIdeas(1) << std::endl;
        std::cout << dog2_brain->getIdeas(10) << std::endl;

        std::cout << brain2->getIdeas(1) << std::endl;
        std::cout << brain2->getIdeas(10) << std::endl;
        delete dog;
        delete dog2;

        (void)dog;
        (void)dog2_brain;
        (void)dog_brain; */

        for (int i = 0; i < size; i++)
            delete Animals[i];
        
        
    }

}