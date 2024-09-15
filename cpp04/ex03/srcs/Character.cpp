#include "../includes/Character.hpp"
#include "../includes/UnequipedMateria.hpp"

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
    UnequipedMateria& Unequiped = UnequipedMateria::getInstance();
    AMateria *tmp = Unequiped.getMateria(m);
    
    if (!m)
        return;
    if (m->getStatus() == EQUIPED)
    {
        std::cout << "This Materia is already equipped by another Character" << std::endl;
        return ;
    }    
    
    for (int i = 0; i < 4; i++)
    { 
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            if (tmp)
                std::cout << "Materia " << m->getType() << " taken from the UniquepedMaterias, equiped for Character " <<
                this->_name << std::endl;
            else
                std::cout << "Materia " << m->getType() << " equipped for Character " <<
                this->_name << std::endl;
            m->setStatus(EQUIPED);
            return ;
        }
    }
    std::cout << "[" << this->_name << "] inventory is full" << std::endl;
}

void Character::unequip(int idx) {
    (void) idx;
    UnequipedMateria& Unequiped = UnequipedMateria::getInstance();
    if (idx < 0 || idx > 3)
    {
        std::cout << "No possible to unequip this index" << std::endl;
        return;
    }
    if (this->_inventory[idx])
    {
        Unequiped.addMateria(this->_inventory[idx]);
        std::cout << "AMateria " << this->_inventory[idx]->getType() <<
        " unequiped by the Character" << this->_name << std::endl;
        this->_inventory[idx] = NULL;
    }
    else
        std::cout << "No possible to unequip this index" << std::endl;
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

bool Character::isFull() const {
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
            return false;
    }
    return true;
}



