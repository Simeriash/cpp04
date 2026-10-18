#include "../includes/MateriaSource.hpp"
#include "../includes/Character.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	AMateria* tmp1;
	tmp1 = src->createMateria("cure");
	me->equip(tmp1);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	me->unequip(0);
	me->use(0, *bob);

	delete tmp;
	delete bob;
	delete me;
	delete src;
	return 0;
}
