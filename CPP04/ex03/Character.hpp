#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        AMateria *_materials[4];
        int _countMaterial;
        std::string _name;
        static const int _maxMaterials = 4;
    public:
        Character(std::string name);
        Character(Character const &copy);
        virtual ~Character();
        std::string const &getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
        Character &operator=(Character &target);
};

#endif