#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &cpy);
		~Cure(void);
		Cure &operator=(Cure const &other);

		AMateria *clone(void) const;
		void use(ICharacter &target);
};

#endif
