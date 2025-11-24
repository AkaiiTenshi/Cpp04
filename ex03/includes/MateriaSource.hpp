#pragma once
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _materiaInv[4];
		int	_materiaCount;

	public:
		MateriaSource();
		MateriaSource(const MateriaSource& other);
		MateriaSource &operator=(const MateriaSource& other);
		virtual ~MateriaSource();
		virtual void learnMateria(AMateria* mat);
		virtual AMateria* createMateria(std::string const & type);
};
