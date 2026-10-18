#include "../includes/MateriaSource.hpp"
#include <string>

MateriaSource::MateriaSource(void)
{
	for(int i = 0; i < 4; i++)
		_template[i] = NULL;
	return;
}

MateriaSource::MateriaSource(MateriaSource const &cpy)
{
	for(int i = 0; i < 4; i++)
	{
		if(cpy._template[i])
			_template[i] = cpy._template[i]->clone();
		else
			_template[i] = NULL;
	}
	return;
}

MateriaSource::~MateriaSource(void)
{
	for(int i = 0; i < 4; i++)
	{
		if(_template[i])
			delete _template[i];
	}
	return;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	if(this != &other)
	{
		for(int i = 0; i < 4; i++)
		{
			if(_template[i])
				delete _template[i];
		}

		for(int i = 0; i < 4; i++)
		{
			if(other._template[i])
				_template[i] = other._template[i]->clone();
			else
				_template[i] = NULL;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if(!m)
		return;

	for(int i = 0; i < 4; i++)
	{
		if(!_template[i])
		{
			_template[i] = m;
			return;
		}
	}
	return;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for(int i = 0; i < 4; i++)
	{
		if(_template[i] && _template[i]->getType() == type)
			return (_template[i]->clone());
	}
	return (NULL);
}
