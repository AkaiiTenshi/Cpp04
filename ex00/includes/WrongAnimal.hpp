#pragma once

# include <string>

class WrongAnimal {
	protected:
    // attributes// type _attribute;
		std::string type;

	public:
    // Orthodox Canonical Form
    WrongAnimal();
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal &operator=(const WrongAnimal &other);
	virtual    ~WrongAnimal();
	
	std::string getType() const;
	void makeSound() const;
};

