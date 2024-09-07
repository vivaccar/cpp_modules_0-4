#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog& other);
        ~Dog();

        Dog& operator=(const Dog& other);
        
        virtual void makeSound() const;
        Brain* getBrain() const;
};

#endif