#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
# include <string>

class Cat : public Animal {
	private:
    // attributes// type _attribute;
	Brain* _brain;

	public:
    // Orthodox Canonical Form
    Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
	virtual    ~Cat();
	
	virtual void makeSound() const;

	// Set and Get in _brain
	void setBrainIdea(const std::string& idea, int index);
	std::string getBrainIdea(int index) const;
};

