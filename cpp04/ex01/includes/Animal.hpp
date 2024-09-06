#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal {
    protected:
        std::string _type;

    public:
        Animal();
        Animal(const Animal& other);
        virtual ~Animal();

        Animal& operator=(const Animal& other);

        virtual void makeSound() const;
        std::string getType() const;
        void setType(std::string type);
};

#endif