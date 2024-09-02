#include "../includes/FragTrap.hpp"

int main(void)
{
    FragTrap Lion("Lion");
    FragTrap Eagle("Eagle");
    Lion.attack("Eagle");
    Eagle.takeDamage(Lion.getAttackDamage());
    std::cout << std::endl;
    Eagle.beRepaired(15);
    std::cout << std::endl;
    Eagle.attack("Lion");
    Lion.takeDamage(Eagle.getAttackDamage());
    std::cout << std::endl;
    Eagle.highFivesGuys();
    Lion.setAttackDamage(100);
    Lion.attack("Eagle");
    Eagle.takeDamage(Lion.getAttackDamage());
    std::cout << std::endl;
    Eagle.beRepaired(1);
    std::cout << std::endl;
}