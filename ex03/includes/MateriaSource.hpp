#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include <string>

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &cpy);
		~MateriaSource(void);
		MateriaSource &operator=(MateriaSource const &other);

		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const &type);

	private:
		AMateria *_template[4];
};

#endif
