#include "Animal.hpp"
#include <iostream>
#include "colors.h"

Animal::Animal() : type("Animal") {
    std::cout << COLOR_RED << "Animal default constructor called" << COLOR_RESET << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type) {
    std::cout << COLOR_RED << "Animal copy constructor called" << COLOR_RESET << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
    std::cout << COLOR_RED << "Animal copy assignment called" << COLOR_RESET << std::endl;
    if (this != &other) {
            this->type = other.type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << COLOR_RED << "Animal destructor called" << COLOR_RESET << std::endl;
}

std::string Animal::getType() const {
	return (type);
}

void Animal::makeSound() const {
	std::cout << COLOR_RED << "Animal makes the most generic sound" << COLOR_RESET << std::endl;
}
