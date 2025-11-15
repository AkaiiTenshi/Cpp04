#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
# include <string>

class Dog : public AAnimal {
	private:
    // attributes// type _attribute;
	Brain *_brain;

	public:
    // Orthodox Canonical Form
    Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
	virtual    ~Dog();
	
	virtual void makeSound() const;



	// Set and Get in _brain
	void setBrainIdea(const std::string& idea, int index);
	std::string getBrainIdea(int index) const;
};
