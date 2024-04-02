#include "Character.hpp"

Character::Character(){
    head = NULL;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(std::string name)
{
    head = NULL;
    this->name = name;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
       delete inventory[i];
    }
    FreeList();
}

void Character::FreeList()
{
    t_materia *cur = head ;
  	t_materia *tmp = NULL;

	while (cur)
	{
		tmp = cur;
		cur = cur->next;
		delete tmp->materia;
		delete tmp;
		tmp = NULL;
	}
}


Character::Character(const Character &src)
{
    this->name = src.name;
    for (int i = 0; i < 4; i++)
    {
        if (src.inventory[i])
        {
            inventory[i] = src.inventory[i]->clone();
        }
        else
        {
            inventory[i] = NULL;
        }
    }
}

t_materia *Character::CreatNode(AMateria *tmp){
    t_materia *node = new t_materia;
    node->next =  NULL;
    node->materia= tmp;
    return node;
}
void Character::AddBack(t_materia * node)
{
    t_materia   *tmp;
    if (head == NULL)
    {
        head = node;
        head->next = NULL;
    }
    else
    {
       tmp = head;
       while(tmp->next)
            tmp = tmp->next;
        tmp->next = node;
    }
}


Character &Character::operator=(const Character &src)
{
    if (this != &src)
    {
        name = src.name;

        for (int i = 0; i < 4; i++)
        {
            delete inventory[i];
            inventory[i] = NULL;
        }

        for (int i = 0; i < 4; i++)
        {
            if (src.inventory[i])
            {
                inventory[i] = src.inventory[i]->clone();
            }
            else
            {
                inventory[i] = NULL;
            }
        }
    }
    return *this;
}

void Character::equip(AMateria *m)
{
    if (m)
    {
        for (int i = 0; i < 4; i++)
        {
            if (!inventory[i])
            {
                inventory[i] = m->clone();
                return; 
            
            }
        }
        delete m;
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && inventory[idx])
    {
        AddBack(CreatNode(inventory[idx]));
        inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && inventory[idx])
    {
        inventory[idx]->use(target);
    }
}
std::string const &Character:: getName() const{
        return this->name;
}

