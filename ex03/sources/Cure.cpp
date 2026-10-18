#include "../includes/Cure.hpp"
#include "../includes/ICharacter.hpp"
#include <iostream>

Cure::Cure(void) : AMateria("cure")
{
	return;
}

Cure::Cure(Cure const &cpy) : AMateria(cpy)
{
	return;
}

Cure::~Cure(void)
{
	return;
}

Cure &Cure::operator=(Cure const &other)
{
	AMateria::operator=(other);
	return (*this);
}

AMateria *Cure::clone(void) const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout <<"* heals " << target.getName() << "’s wounds *" << std::endl;
}
