#include "../includes/ClapTrap.hpp"

int main(void) {
    ClapTrap Max("Max");
    ClapTrap Lewis("Lewis");

    std::cout << std::endl;
    Max.setAttackDamage(4);
    Lewis.setAttackDamage(2);
    Max.attack("Lewis");
    Lewis.takeDamage(Max.getAttackDamage());
    std::cout << std::endl;
    Lewis.attack("Max");
    Max.takeDamage(Lewis.getAttackDamage());
    std::cout << std::endl;
    Max.beRepaired(1);
    Lewis.beRepaired(2);
    std::cout << std::endl;
    Max.attack("Lewis");
    Lewis.takeDamage(Max.getAttackDamage());
    std::cout << std::endl;
    Max.attack("Lewis");
    Lewis.takeDamage(Max.getAttackDamage());
    std::cout << std::endl;
    Lewis.beRepaired(2);
    Lewis.attack("Max");

    std::cout << std::endl;
}