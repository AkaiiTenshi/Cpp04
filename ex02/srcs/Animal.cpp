#include "Animal.hpp"
#include <iostream>
#include "colors.h"

AAnimal::AAnimal() : type("AAnimal") {
    std::cout << COLOR_RED << "AAnimal default constructor called" << COLOR_RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) : type(other.type) {
    std::cout << COLOR_RED << "AAnimal copy constructor called" << COLOR_RESET << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
    std::cout << COLOR_RED << "AAnimal copy assignment called" << COLOR_RESET << std::endl;
    if (this != &other) {
            this->type = other.type;
    }
    return *this;
}

AAnimal::~AAnimal() {
    std::cout << COLOR_RED << "AAnimal destructor called" << COLOR_RESET << std::endl;
}

std::string AAnimal::getType() const {
	return (type);
}
