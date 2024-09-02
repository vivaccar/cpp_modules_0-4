#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define BLUE "\033[34m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

#include <iostream>
#include <string>

class ClapTrap {
    protected:
        std::string _name;
        unsigned int _hit;
        unsigned int _energy;
        unsigned int _attackDamage;
    
    public:
        // Orthodox Canonical Form
        ClapTrap();
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap();

        ClapTrap(std::string name);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        // getters
        void setName(std::string name);
        void setEnergy(unsigned int amount);
        void setHit(unsigned int amount);
        void setAttackDamage(unsigned int amount);
        
        // setters
        std::string getName() const;
        unsigned int getEnergy() const;
        unsigned int getHit() const;
        unsigned int getAttackDamage() const;

} ;

#endif