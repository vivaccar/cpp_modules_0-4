#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include <ICharacter.hpp>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

class AMateria {
    protected:
        std::string _type;
    
    public:

        AMateria();
        AMateria(std::string const& type);
        AMateria(const AMateria& other);
        ~AMateria();

        AMateria& operator=(const AMateria& other);

        std::string const& getType() const;

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

};

#endif