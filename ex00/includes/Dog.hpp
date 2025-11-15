#pragma once
#include "Animal.hpp"
# include <string>

class Dog : public Animal {
	private:
    // attributes// type _attribute;

	public:
    // Orthodox Canonical Form
    Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
	virtual    ~Dog();
	
	virtual void makeSound() const;
};
