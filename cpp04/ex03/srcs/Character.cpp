#include "../includes/Character.hpp"

Character::Character() {
    this->_name = "";
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    std::cout << GREEN << "[Character] default constructor called" << RESET << std::endl;
}

Character::Character(std::string name) {
    this->_name = name;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    std::cout << GREEN << "[Character] " << name <<
    " constructor called" << RESET << std::endl;
}

Character::~Character() {
    std::cout << RED << "[Character] destructor called" << RESET << std::endl;
}

Character::Character(const Character& other) {
    this->_name = other._name;
    for (int i = 0; i < 4; i++) {
        if (other._inventory[i] != NULL) 
            this->_inventory[i] = other._inventory[i]->clone();
        else
           this->_inventory[i] = NULL;
    }
}

Character& Character::operator=(const Character& other) {
    this->_name = other._name;
    for (int i = 0; i < 4; i++)
    {
        if (other._inventory[i] != NULL)
            this->_inventory[i] = other._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }
        // clone
    return (*this);
}

std::string const & Character::getName() const {
    return this->_name;
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++)
    { 
        if (this->_inventory[i] != NULL)
        {
            this->_inventory[i] = m;
            std::cout << "Materia " << m->getType() << " equipped for Character " <<
            this->_name << std::endl;
            break;
        }
    }
}

void Character::unequip(int idx) {
    (void) idx;
}

void Character::use(int idx, ICharacter& target) {
    if (this->_inventory[idx] != NULL)
        this->_inventory[idx]->use(target);
    else
        std::cout << target.getName() << " has no materia in this index" << std::endl;
}