#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource () {
    for (int i = 0; i < 4; i++)
        this->_materias[i] = NULL;
    std::cout << GREEN << "[MateriaSource] default constructor called" << RESET << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
    for (int i = 0; i < 4; i++)
    {
        if (other._materias[i] == NULL)
            this->_materias[i] = NULL;
        else
            this->_materias[i] = other._materias[i]->clone();
    }
    std::cout << GREEN << "[MateriaSource] copy constructor called" << RESET << std::endl;
}

MateriaSource::~MateriaSource() {
    std::cout << RED << "[MateriaSource] destructor called" << RESET << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] != NULL)
            delete this->_materias[i];
        if (other._materias[i] == NULL)
            this->_materias[i] = NULL;
        else
            this->_materias[i] = other._materias[i]->clone();
    }
    return *this;
    std::cout << GREEN << "[MateriaSource] copy assignmente operator called" << RESET << std::endl;
}

void MateriaSource::learnMateria(AMateria *m) {
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] == NULL)
        {
            this->_materias[i] = m;
            std::cout << "Materia " << m->getType() << " learned" << std::endl;
            return ;
        }
    }
    std::cout << "Materia " << m->getType() << " cannot be learned" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++)
    {
        if ((this->_materias[i]) && (this->_materias[i]->getType() == type))
            return (this->_materias[i]->clone());
    }
    std::cout << "Materia " << type << " cannot be created because you haven't learned yet" << std::endl;
    return (NULL);
}