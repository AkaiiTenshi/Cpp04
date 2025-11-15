#pragma once
#include "Animal.hpp"
# include <string>

class Cat : public Animal {
	private:
    // attributes// type _attribute;

	public:
    // Orthodox Canonical Form
    Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
	virtual    ~Cat();
	
	virtual void makeSound() const;
};

