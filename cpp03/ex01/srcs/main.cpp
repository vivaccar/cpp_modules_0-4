#include "../includes/ScavTrap.hpp"

int main(void)
{
    {
        std::cout << "------LANDO  VS  CHARLES------" << std::endl;
        std::cout << std::endl;
        ScavTrap Lando("Lando");
        ScavTrap Charles("Charles");

        std::cout << std::endl;
        Lando.attack("Charles");
        Charles.takeDamage(Charles.getAttackDamage());
        std::cout << std::endl;
        Charles.attack("Lando");
        Lando.takeDamage(Charles.getAttackDamage());
        std::cout << std::endl;
        Charles.beRepaired(10);
        Lando.beRepaired(5);
        std::cout << std::endl;
        Charles.guardGate();
        std::cout << std::endl;
        std::cout << "------FIGHT IS OVER------" << std::endl;

        std::cout << std::endl;
    }
}
/*     {
        std::cout << std::endl << "------FERNANDO  VS  SERGIO------" << std::endl;
        std::cout << std::endl;
        ScavTrap Fernando("Fernando");
        ClapTrap Sergio("Sergio");
        Fernando.attack("Sergio");
        Sergio.takeDamage(Fernando.getAttackDamage());
        std::cout << std::endl;
        Sergio.beRepaired(1);
    } */