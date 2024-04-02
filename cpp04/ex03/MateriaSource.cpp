#include "MateriaSource.hpp"

MateriaSource ::MateriaSource(): learnedMaterias(0){
    for (int i = 0; i < 4; i++)
    {
        materiaTemplates[i] = NULL;
    }
}
MateriaSource::~MateriaSource(){
    for(int i = 0; i < 4; i++)
    {
        delete materiaTemplates[i];
    }
}
MateriaSource ::MateriaSource(const MateriaSource &src){
    for (int i = 0; i < src.learnedMaterias; i++)
        {
            if (src.materiaTemplates[i])
            {
                materiaTemplates[i] = src.materiaTemplates[i]->clone();
            }
            else
            {
                materiaTemplates[i] = NULL;
            }
        }
    
        learnedMaterias = src.learnedMaterias;
}
MateriaSource &MateriaSource::operator=(const MateriaSource &src){
    if (this != &src)
    {
        for (int i = 0; i < learnedMaterias; i++)
        {
            delete materiaTemplates[i];
            materiaTemplates[i] = NULL;
        }

        for (int i = 0; i < src.learnedMaterias; i++)
        {
            if (src.materiaTemplates[i])
            {
                materiaTemplates[i] = src.materiaTemplates[i]->clone();
            }
            else
            {
                materiaTemplates[i] = NULL;
            }
        }

        learnedMaterias = src.learnedMaterias;
    }

    return *this;
}
void MateriaSource:: learnMateria(AMateria *m){
    if(learnedMaterias < 4 && m)
    {
        materiaTemplates[learnedMaterias++] = m->clone();
    }
    delete m;

}
AMateria* MateriaSource:: createMateria(std::string const & type){
    for (int i = 0; i < learnedMaterias; i++)
    {
        if (materiaTemplates[i]->getType() == type)
        {
            return materiaTemplates[i]->clone();
        }
    }
    return NULL;
}
