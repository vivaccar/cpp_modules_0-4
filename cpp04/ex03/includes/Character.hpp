#include "ICharacter.hpp"

class Character : public ICharacter {
    private:
        std::string _name;
        AMateria *_inventory[4];

    public:
        Character();
        Character(std::string name);
        Character(const Character& other);
        ~Character();

        Character& operator=(const Character& other);
        std::string const & getName() const;

        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};