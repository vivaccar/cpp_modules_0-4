#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap default constructor was called" << std::endl;
    this->_name = "";
    this->_hit = 100;
    this->_energy = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) {
    this->_name = name;
    this->_hit = 100;
    this->_energy = 100;
    this->_attackDamage = 30;
    std::cout << GREEN << "FragTrap " << this->_name <<
    " was created" << RESET << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << RED << "FragTrap " << this->_name <<
    " was destroyed" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) {
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    this->_name = other._name;
    this->_hit = other._hit;
    this->_energy = other._energy;
    this->_attackDamage = other._attackDamage;
    return (*this);
}

void FragTrap::attack(const std::string& target) {
    if (this->_hit < 1 || this->_energy < 1)
    {
        std::cout << RED << "FragTrap " << this->_name <<
        " has no more energy or hit points to attack" << RESET << std::endl;
        return; 
    }
    this->_energy -= 1;
    std::cout << "FragTrap " << BLUE << this->_name << RESET <<
    " attacks " << RED << target << RESET << " causing " << this->_attackDamage <<
    " points of damage" << std::endl;
    std::cout << BLUE << "FragTrap " << this->_name <<
    " lost 1 energy with this attack and has " <<
    this->_energy << " of energy now" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << this->_name << " is requesting a highfive!" << std::endl;
    std::cout << std::endl;
    std::cout << "                                                                                     \n"
                 "                                                                                     \n"
                 "  ,---,                         ,---,                                                \n"
                 ",--.' |      ,--,             ,--.' |              .--.,   ,--,                       \n"
                 "|  |  :    ,--.'|             |  |  :            ,--.'  \\,--.'|                      \n"
                 ":  :  :    |  |,     ,----._,.:  :  :            |  | /\\/|  |,       .---.           \n"
                 ":  |  |,--.`--'_    /   /  ' /:  |  |,--.        :  : :  `--'_     /.  ./|   ,---.   \n"
                 "|  :  '   |,' ,'|  |   :     ||  :  '   |        :  | |-,,' ,'|  .-' . ' |  /     \\  \n"
                 "|  |   /' :'  | |  |   | .\\  .|  |   /' :        |  : :/|'  | | /___/ \\: | /    /  | \n"
                 "'  :  | | ||  | :  .   ; ';  |'  :  | | |        |  |  .'|  | : .   \\  ' ..    ' / | \n"
                 "|  |  ' | :'  : |__'   .   . ||  |  ' | :        '  : '  '  : |__\\   \\   ''   ;   /| \n"
                 "|  :  :_:,'|  | '.'|`---`-'| ||  :  :_:,'        |  | |  |  | '.'|\\   \\   '   |  / | \n"
                 "|  | ,'    ;  :    ;.'__\\/_: ||  | ,'            |  : \\  ;  :    ; \\   \\ ||   :    | \n"
                 "`--''      |  ,   / |   :    :`--''              |  |,'  |  ,   /   '---\"  \\   \\  /  \n"
                 "            ---`-'   \\   \\  /                    `--'     ---`-'            `----'   \n"
                 "                      `--`-'                                                         \n";
}
