#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    
    private:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& other);
        ~DiamondTrap();
        DiamondTrap& operator=(const DiamondTrap& other);

        using ScavTrap::attack;
        void whoAmI(void);
        std::string getDiamondName() const;
} ;

#endif