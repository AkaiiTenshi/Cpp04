#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(const std::string type) : _type(type){
}

AMateria::AMateria(const AMateria &other): _type(other._type) {
}

AMateria &AMateria::operator=(const AMateria &other) {
	(void)other;
    return *this;
}

AMateria::~AMateria() {
}

void AMateria::use(ICharacter& target){
	(void)target;
}

std::string const & AMateria::getType() const{
	return _type;
}
