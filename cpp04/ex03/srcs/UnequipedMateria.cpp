#include "../includes/UnequipedMateria.hpp"

UnequipedMateria::UnequipedMateria() {
    unequipedNodes = NULL;
}

UnequipedMateria::~UnequipedMateria() {

    t_UnequipedNodes *tmp = unequipedNodes;
    t_UnequipedNodes *next;
    while (tmp)
    {
        next = tmp->next;
        delete tmp->materia;
        delete tmp;
        tmp = next;
    }
}

UnequipedMateria& UnequipedMateria::getInstance() {
    static UnequipedMateria instance;
    return instance; 
}

void UnequipedMateria::addMateria(AMateria* m) {
    t_UnequipedNodes *new_node = new t_UnequipedNodes;
    new_node->materia = m;
    new_node->next = unequipedNodes;
    unequipedNodes = new_node;
};

AMateria* UnequipedMateria::getMateria(std::string& type) {
    t_UnequipedNodes *tmp = this->unequipedNodes;
    t_UnequipedNodes *prev = NULL;

    while (tmp)
    {
        if (tmp->materia->getType() == type)
        {
            AMateria* materia = tmp->materia;
            if (prev == NULL)
                this->unequipedNodes = tmp->next;
            else
                prev->next = tmp->next;
            delete tmp;
            return materia;
        }
        prev = tmp;
        tmp = tmp->next;
    }
    return NULL;
}