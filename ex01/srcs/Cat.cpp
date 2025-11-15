#include "Cat.hpp"
#include <iostream>
#include "colors.h"
#include <cstdlib>

Cat::Cat() : Animal(){
	type = "Cat";
	_brain = new Brain;
	if (!_brain)
	{
		std::cerr << "Malloc error with Brain in cat" << std::endl;
		exit(1);
	}
    std::cout << COLOR_BRIGHT_YELLOW << "Cat default constructor called" << COLOR_RESET << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other){
	type = other.type;
	_brain = new Brain(*other._brain);
	if (!_brain)
	{
		std::cerr << "Malloc error with Brain in cat, copy const" << std::endl;
		exit(1);
	}
    std::cout << COLOR_BRIGHT_YELLOW << "Cat copy constructor called" << COLOR_RESET << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << COLOR_BRIGHT_YELLOW << "Cat copy assignment called" << COLOR_RESET << std::endl;
    if (this != &other) {
		Animal::operator=(other);
			if(_brain)
				*_brain = *other._brain;
    }
    return *this;
}

Cat::~Cat() {
	delete _brain;
    std::cout << COLOR_BRIGHT_YELLOW << "Cat destructor called" << COLOR_RESET << std::endl;
}

void Cat::makeSound() const{
	std::cout << COLOR_BRIGHT_YELLOW << "Meow Meow !!!!" << COLOR_RESET << std::endl;
}

void Cat::setBrainIdea(const std::string& idea, int index) {
	if (_brain)
		_brain->setIdea(idea, index);
}

std::string Cat::getBrainIdea(int index) const {
	if (_brain)
		return _brain->getIdea(index);
	return std::string();
}


