#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal(){
	type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other){
	type = other.type;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "Cat copy assignment called" << std::endl;
    if (this != &other) {
            this->type = other.type;
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "Meow Meow !!!!" << std::endl;
}

