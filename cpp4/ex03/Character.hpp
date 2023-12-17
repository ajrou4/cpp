#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include<iostream>
#include<string>
#include "ICharacter.hpp"

typedef struct s_materias
{
        AMateria *materia;
        struct s_materias *next;
}t_materia;

class Character: public ICharacter 
{
private:
        std::string name;
        AMateria *inventory[4];   
        t_materia *head;
public: 
        Character();
        Character(std::string name);
        ~Character();
        Character(const Character &src);
        Character& operator=(const Character &src);
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
        std::string const &getName() const;
        t_materia *CreatNode(AMateria *tmp);
        void AddBack(t_materia * node);
        void FreeList(); 

};
#endif