#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <string>

class Character : public ICharacter
{
	public:
		Character(std::string name);
		Character(Character const &cpy);
		~Character(void);
		Character &operator=(Character const &other);

		std::string const &getName(void) const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);

	private:
		std::string _name;
		AMateria *_inventory[4];
};

#endif
