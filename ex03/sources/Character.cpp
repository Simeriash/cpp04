#include "../includes/Character.hpp"
#include "../includes/AMateria.hpp"
#include <string>

Character::Character(std::string name) : _name(name)
{
	for(int i = 0; i < 4 ;i++)
		_inventory[i] = NULL;
	return;
}

Character::Character(Character const &cpy) : _name(cpy._name)
{
	for(int i = 0; i < 4; i++)
	{
		if(cpy._inventory[i])
			_inventory[i] = cpy._inventory[i];
		else
			_inventory[i] = NULL;
	}
	return;
}

Character::~Character(void)
{
	for(int i = 0; i < 4; i++)
	{
		if(_inventory[i])
			delete _inventory[i];
	}
	return;
}

Character &Character::operator=(Character const &other)
{
	if(this != &other)
	{
		_name = other._name;

		for(int i = 0; i < 4; i++)
		{
			if(other._inventory[i])
				delete _inventory[i];
		}

		for(int i = 0; i < 4; i++)
		{
			if(other._inventory[i])
				_inventory[i] = other._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}

std::string const &Character::getName(void) const
{
	return (_name);
}

void Character::equip(AMateria *m)
{
	if(!m)
		return;

	for(int i = 0; i < 4; i++)
	{
		if(!_inventory[i])
		{
			_inventory[i] = m;
			return;
		}
	}
	return;
}

void Character::unequip(int idx)
{
	if(idx < 0 || idx > 3)
		return;

	_inventory[idx] = NULL;
	return;
}

void Character::use(int idx, ICharacter &target)
{
	if(idx < 0 || idx > 3 || !_inventory[idx])
		return;

	_inventory[idx]->use(target);
	return;
}
