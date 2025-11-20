#pragma once
#include "AMateria.hpp"

class ICharacter;

class Ice : public AMateria{

	public:
		// Orthodox Canonical Form

		Ice(); // Default constructor
		Ice(const Ice &other); // Copy constructor
		Ice &operator=(const Ice &other); // Copy assignment
		~Ice(); // Destructor

		// std::string const & getType() const; // Returns the Materia Type
		
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};
