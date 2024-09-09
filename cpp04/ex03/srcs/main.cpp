#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Character.hpp"
#include "../includes/MateriaSource.hpp"


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
    AMateria *m1 = new Cure();
    AMateria *m2 = new Ice();

    std::cout << std::endl;

    p1->equip(m1);
    p1->equip(m1);
    p1->equip(m2);
    p1->equip(m2);
    p1->equip(m1);
    p1->equip(m1);
    p1->equip(m1);
    p2->equip(m2);
    p2->equip(m1);

    std::cout << std::endl << RED <<  "USE()" << std::endl;

    p1->use(-1, *p2);
    p1->use(3, *p2);
    p2->use(1, *p2);
    p2->use(4, *p2);

    //UNEQUIP()

    //COPY TESTS()
    std::cout << std::endl << RED <<  "COPYCONSTRUCTOR() AND COPY ASSIGNMENT ==" << std::endl;

    Character *c1 = new Character("chico");
    Character *c2 = new Character("joao");
    Character *c3 = new Character(*c1);

    *c2 = *c1;

    std::cout << c3->getName() << c2->getName() << c1->getName() << std::endl;

    std::cout << std::endl;
    delete p1;
    delete p2;
    delete m1;
    delete m2;
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
    std::cout << std::endl;
    test_player();
    //test_materia();

    std::cout << std::endl;
}