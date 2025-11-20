#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>

class ICharacter;

class AMateria {
	protected:
		// attributesint _attribute1;// type _attribute2;
	const	std::string _type;

	public:
		// Orthodox Canonical Form

		AMateria(const std::string type); // Default constructor
		AMateria(const AMateria &other); // Copy constructor
		AMateria &operator=(const AMateria &other); // Copy assignment
		~AMateria(); // Destructor

		std::string const & getType() const; // Returns the Materia Type
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
#endif
