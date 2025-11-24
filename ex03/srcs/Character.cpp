#include "Character.hpp"
#include "ICharacter.hpp"

Character::Character(const std::string &name) : _name(name), _inventoryI(0) {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &other) : _name(other._name), _inventoryI(other._inventoryI) {
	for (int i = 0; i < 4; i++){
		if(!other._inventory[i])
			_inventory[i] = NULL;
		else
			_inventory[i] = other._inventory[i]->clone();
	}

}

Character &Character::operator=(const Character &other) {
	if (this != &other) {
		this->_name = other._name;
		for (int i = 0; i < 4; i++){
			delete _inventory[i];
			if(!other._inventory[i])
				_inventory[i] = NULL;
			else
				_inventory[i] = other._inventory[i]->clone();
			this->_inventoryI = other._inventoryI;
		}
	}
	return *this;
}

Character::~Character() {
		for (int i = 0; i < 4; i++)
			delete _inventory[i];
}

std::string const & Character::getName(void) const{
	return _name;
}

void Character::equip(AMateria* m){
	if(!m)
		return;
	if (_inventoryI < 4){
		_inventory[_inventoryI] = m;
		_inventoryI++;
	}
}

void Character::unequip(int idx){
	if (idx < 4 && idx >= 0){
		_inventory[idx] = NULL;
		_inventoryI--;
	}
}

void Character::use(int idx, ICharacter& target){
	if(idx > 4 || idx < 0 || !_inventory[idx])
		return ;
	_inventory[idx]->use(target);
}
