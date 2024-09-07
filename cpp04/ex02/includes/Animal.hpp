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

        virtual Animal& operator=(const Animal& other);

        virtual Brain* getBrain() const = 0;
        virtual void makeSound() const;
        std::string getType() const;
        void setType(std::string type);
};

#endif