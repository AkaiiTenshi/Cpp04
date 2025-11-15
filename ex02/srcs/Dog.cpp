#include "Dog.hpp"
#include <iostream>
#include <cstdlib>
#include "colors.h"

Dog::Dog() : AAnimal(){
	type = "Dog";
	_brain = new Brain;
	if (!_brain)
	{
		std::cerr << "Malloc error with Brain in dog" << std::endl;
		exit(1);
	}
    std::cout << COLOR_BRIGHT_MAGENTA << "Dog default constructor called" << COLOR_RESET << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other){
	type = other.type;
	_brain = new Brain(*other._brain);
	if (!_brain)
	{
		std::cerr << "Malloc error with Brain in dog, copy const" << std::endl;
		exit(1);
	}
    std::cout << COLOR_BRIGHT_MAGENTA << "Dog copy constructor called" << COLOR_RESET << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "Dog copy assignment called" << std::endl;
    if (this != &other) {
		AAnimal::operator=(other);
			if(_brain)
				*_brain = *other._brain;
    }
    return *this;
}

Dog::~Dog() {
	delete _brain;
    std::cout << COLOR_BRIGHT_MAGENTA << "Dog destructor called" << COLOR_RESET << std::endl;
}

void Dog::makeSound() const{
	std::cout << COLOR_BRIGHT_MAGENTA << "Rrrrrr... WAFF WAFF !!" << COLOR_RESET << std::endl;
}


void Dog::setBrainIdea(const std::string& idea, int index) {
	if (_brain)
		_brain->setIdea(idea, index);
}

std::string Dog::getBrainIdea(int index) const {
	if (_brain)
		return _brain->getIdea(index);
	return std::string();
}


