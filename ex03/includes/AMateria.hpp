#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>

class AMateria {
	protected:
		// attributesint _attribute1;// type _attribute2;
		std::string _type;

	public:
		// Orthodox Canonical Form

		AMateria(); // Default constructor
		AMateria(const AMateria &other); // Copy constructor
		AMateria &operator=(const AMateria &other); // Copy assignment

		std::string const & getType() const; // Returns the Materia Type
		
		virtual AMateria* clone() const = 0;
		virtual use(ICharacter& target);
};
#endif
