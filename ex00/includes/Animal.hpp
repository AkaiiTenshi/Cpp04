#pragma once

# include <string>

class Animal {
	protected:
    // attributes// type _attribute;
		std::string type;

	public:
    // Orthodox Canonical Form
    Animal();
    Animal(const Animal &other);
    Animal &operator=(const Animal &other);
	virtual    ~Animal();
	
	std::string getType() const;
	virtual void makeSound() const;
};
