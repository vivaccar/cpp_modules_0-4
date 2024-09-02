#include "../includes/DiamondTrap.hpp"

int main(void)
{
    DiamondTrap r10("Ronaldinho");
    DiamondTrap romario("Romario");
    FragTrap JUNIOR("junior");

    std::cout << JUNIOR.getEnergy() << std::endl;


    std::cout << BLUE << "DiamondTrap " << romario.getDiamondName() << " has " <<
    romario.getHit() << " hit points " << std::endl;
    std::cout << BLUE << "DiamondTrap " << romario.getDiamondName() << " has " <<
    romario.getEnergy() << " energy points " << std::endl;
    std::cout << BLUE << "DiamondTrap " << romario.getDiamondName() << " has " <<
    romario.getAttackDamage() << " attack Damage " << std::endl;
    
    std::cout << std::endl;
    romario.attack("r10");
    std::cout << std::endl;

    std::cout << std::endl;
    r10.whoAmI();
    romario.whoAmI();
    std::cout << std::endl;
}