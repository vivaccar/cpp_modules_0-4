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
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
    std::cout << RED << "[Character] destructor called" << RESET << std::endl;
}

Character::Character(const Character& other) {
    std::cout << GREEN << "[Character] copy constructor called" << RESET << std::endl;
    this->_name = other._name;
    for (int i = 0; i < 4; i++) {
        if (other._inventory[i] != NULL) 
            this->_inventory[i] = other._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }
}

Character& Character::operator=(const Character& other) {
    std::cout << GREEN << "[Character] Copy assignment operator called" << RESET << std::endl;
    this->_name = other._name;
    for (int i = 0; i < 4; i++)
    {
        if (other._inventory[i] != NULL)
            this->_inventory[i] = other._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }
    return (*this);
}

std::string const & Character::getName() const {
    return this->_name;
}

void Character::equip(AMateria* m) {
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    { 
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m->clone();
            std::cout << "Materia " << m->getType() << " equipped for Character " <<
            this->_name << std::endl;
            return ;
        }
    }
    std::cout << "[" << this->_name << "] inventory is full" << std::endl;
}

void Character::unequip(int idx) {
    (void) idx;
}

void Character::use(int idx, ICharacter& target) {
    if (idx < 0 || idx > 3)
    {
        std::cout << RED << "[Use] Index out of range 0-3" << RESET << std::endl;
        return;
    }
    if (this->_inventory[idx] != NULL)
        this->_inventory[idx]->use(target);
    else
        std::cout << this->_name << " has no materia in this index" << std::endl;
}