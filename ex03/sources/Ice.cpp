#include "../includes/Ice.hpp"
#include "../includes/ICharacter.hpp"
#include <iostream>

Ice::Ice(void) : AMateria("ice")
{
	return;
}

Ice::Ice(Ice const &cpy) : AMateria(cpy)
{
	return;
}

Ice::~Ice(void)
{
	return;
}

Ice &Ice::operator=(Ice const &other)
{
	AMateria::operator=(other);
	return (*this);
}

AMateria *Ice::clone(void) const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
