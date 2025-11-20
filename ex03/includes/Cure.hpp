#pragma once
#include "AMateria.hpp"

class ICharacter;

class Cure : public AMateria{

	public:
		// Orthodox Canonical Form

		Cure(); // Default constructor
		Cure(const Cure &other); // Copy constructor
		Cure &operator=(const Cure &other); // Copy assignment
		~Cure(); // Destructor

		// std::string const & getType() const; // Returns the Materia Type
		
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

