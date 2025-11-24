#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure() : AMateria("ice") {
}

Cure::Cure(const Cure &other) : AMateria(other){
}

Cure &Cure::operator=(const Cure &other) {
    if (this != &other) {
		AMateria::operator=(other);			
    }
    return *this;
}

Cure::~Cure() {
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const {
	return new Cure(*this);
}

