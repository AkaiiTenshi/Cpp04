#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal(){
	type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other){
	type = other.type;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    std::cout << "WrongCat copy assignment called" << std::endl;
    if (this != &other) {
            this->type = other.type;
    }
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "Meow Meow !!!!" << std::endl;
}

