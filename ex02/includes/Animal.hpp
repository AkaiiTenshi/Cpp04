#pragma once

# include <string>

class AAnimal {
	protected:
    // attributes// type _attribute;
		std::string type;

	public:
    // Orthodox Canonical Form
    AAnimal();
    AAnimal(const AAnimal &other);
    AAnimal &operator=(const AAnimal &other);
	virtual    ~AAnimal();
	
	std::string getType() const;
	virtual void makeSound() const = 0;
};
