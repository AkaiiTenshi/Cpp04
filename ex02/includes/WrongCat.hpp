#pragma once
#include "WrongAnimal.hpp"
# include <string>

class WrongCat : public WrongAnimal {
	private:
    // attributes// type _attribute;

	public:
    // Orthodox Canonical Form
    WrongCat();
    WrongCat(const WrongCat &other);
    WrongCat &operator=(const WrongCat &other);
	virtual    ~WrongCat();
	
	void makeSound() const;
};


