#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

class WrongAnimal {
    protected:
        std::string _type;

    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& other);
        ~WrongAnimal();

        WrongAnimal& operator=(const WrongAnimal& other);

        void makeSound() const;
        std::string getType() const;
        void setType(std::string type);
};

#endif