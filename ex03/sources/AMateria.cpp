#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"
#include <iostream>
#include <string>

AMateria::AMateria(std::string const &type) : _type(type)
{
	return;
}

AMateria::AMateria(AMateria const &cpy)
{
	*this = cpy;
	return;
}

AMateria::~AMateria(void)
{
	return;
}

AMateria &AMateria::operator=(AMateria const &other)
{
	if(this != &other)
		_type = other._type;
	return (*this);
}

std::string const &AMateria::getType(void) const
{
	return (_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "* No materia to use against " << target.getName() << " *" << std::endl;
}
