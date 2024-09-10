#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Character.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/UnequipedMateria.hpp"


int test_subj()
{
        std::cout << RED <<  "------SUBJECT TEST-------" << std::endl << std::endl;
        
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
        return 0;
}

void test_player()
{
    std::cout << RED <<  "------PLAYER TESTS-------" << std::endl << std::endl;
    
    std::cout << RED <<  "EQUIP()" << std::endl;
    ICharacter *p1 = new Character("Vinicius");
    ICharacter *p2 = new Character("Vivaccar");
    AMateria *ices[4];
    AMateria *cures[4];

    std::cout << std::endl;

    for (int i = 0; i < 4; i++)
    {
        ices[i] = new Ice();
        cures[i] = new Cure();
    }
    std::cout << std::endl;

    p1->equip(cures[0]);
    p1->equip(ices[1]);
    p1->equip(ices[2]);


    std::cout << std::endl << RED <<  "USE()" << std::endl;

    p1->use(-1, *p2);
    p1->use(3, *p2);
    p2->use(1, *p1);
    p2->use(4, *p1);
    p2->use(0, *p1);

    //UNEQUIP()
    std::cout << std::endl << RED <<  "UNEQUIP()" << RESET << std::endl;
    p1->unequip(0);
    p1->use(1, *p2);
    p1->unequip(1);
    p2->unequip(4);
    p2->unequip(1);
    
    std::string type = "ice";
    p1->getUnequipedMateria(type);

    p2->equip(ices[1]);


    for (int i = 0; i < 4; i++)
    {
        if (!ices[i]->isEquiped())
            delete ices[i];
        if (!cures[i]->isEquiped())
            delete cures[i];
    }
    delete p1;
    delete p2;

/*     //COPY TESTS()
    std::cout << std::endl << RED <<  "COPYCONSTRUCTOR() AND COPY ASSIGNMENT ==" << std::endl;

    Character *c1 = new Character("chico");
    Character *c2 = new Character("joao");
    Character *c3 = new Character(*c1);
    AMateria *materia = new Ice();
    std::cout << std::endl;

    c1->equip(materia);
    *c2 = *c1;

    std::cout << "c1 Name: " << c1->getName() << std::endl;
    std::cout << "c2 Name: " << c2->getName() << std::endl;
    std::cout << "c3 Name: " << c3->getName() << std::endl;

    c1->use(2, *c2);
    c2->use(2, *c2);
    c2->use(2, *c2);

    std::cout << std::endl;
    delete c1;
    delete c2;
    delete c3; */

}

void test_materia()
{
    std::cout << std::endl << RED <<  "------MATERIA TESTS-------" << std::endl << std::endl;
    
    IMateriaSource *src = new MateriaSource();
    AMateria *m1 = new Ice();
    AMateria *m2 = new Cure();
    AMateria *tmp;
    AMateria *tmp2;

    std::cout << std::endl;
    
    std::cout << RED <<  "LEARNMATERIA()" << std::endl; 
    src->learnMateria(m1);
    src->learnMateria(m2);
    std::cout<< std::endl << RED <<  "CREATEMATERIA()" << std::endl;
    tmp = src->createMateria("ice");
    tmp2 = src->createMateria("cure");

    ICharacter *player = new Character("Ronaldo");
    player->equip(tmp);
    player->equip(tmp2);
    player->equip(tmp2);
    player->equip(tmp);
    player->equip(tmp);

    delete src;
    delete m1;
    delete m2;
    delete player;
    delete tmp;
    delete tmp2;
}

int main(void)
{
    //test_subj();
    //std::cout << std::endl;
    test_player();
    //test_materia();
    //std::cout << std::endl;
}