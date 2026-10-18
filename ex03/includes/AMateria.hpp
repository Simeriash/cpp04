#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

class ICharacter;

class AMateria
{
	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &cpy);
		virtual ~AMateria(void);
		AMateria &operator=(AMateria const &other);

		std::string const &getType(void) const;

		virtual AMateria *clone(void) const = 0;
		virtual void use(ICharacter &target);

	protected:
		std::string _type;
};

#endif
