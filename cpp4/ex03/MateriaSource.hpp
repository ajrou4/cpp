#ifndef MATERIASOURCE_HPP
#define  MATERIASOURCE_HPP

#include<iostream>
#include<string>
#include"IMateriaSource.hpp"
#include "AMateria.hpp"
class MateriaSource : public IMateriaSource
{
    private:
            AMateria *materiaTemplates[4];
            int learnedMaterias;
    public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource &src);
    MateriaSource& operator=(const MateriaSource &src);
    void learnMateria(AMateria *m);
    AMateria* createMateria(std::string const & type);
};
#endif    