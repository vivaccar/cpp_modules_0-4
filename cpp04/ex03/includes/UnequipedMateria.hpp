#ifndef UNEQUIPEDMATERIA_HPP
#define UNEQUIPEDMATERIA_HPP

#include "AMateria.hpp"
#include "Character.hpp"

struct t_UnequipedNodes {
    AMateria* materia;
    t_UnequipedNodes* next;
};

class UnequipedMateria {
    private:
        t_UnequipedNodes *unequipedNodes;
        UnequipedMateria();
        UnequipedMateria(const UnequipedMateria& other);
        UnequipedMateria& operator==(const UnequipedMateria& other);

    public:
        ~UnequipedMateria();
        static UnequipedMateria& getInstance();
        void addMateria(AMateria* m);
        AMateria* getMateria(AMateria *target);
} ;

#endif