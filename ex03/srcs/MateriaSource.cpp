#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() : _materiaCount(0) {
	for (int i = 0; i < 4; i++){
		_materiaInv[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &other) : _materiaCount(other._materiaCount) {
	for (int i = 0; i < 4; i++){
		if(other._materiaInv[i])
			_materiaInv[i] = other._materiaInv[i]->clone();
		else
			_materiaInv[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
    if (this != &other) {
            this->_materiaCount = other._materiaCount;
			for (int i = 0; i < 4; i++){
				delete _materiaInv[i];
				if(other._materiaInv[i])
					_materiaInv[i] = other._materiaInv[i]->clone();
				else
					_materiaInv[i] = NULL;
			}
    }
    return *this;
}

MateriaSource::~MateriaSource() {
			for (int i = 0; i < 4; i++){
				delete _materiaInv[i];
			}
}

void MateriaSource::learnMateria(AMateria* mat){
	if (_materiaCount < 4){
		_materiaInv[_materiaCount] = mat->clone();
		_materiaCount++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < _materiaCount; i++){
		if(_materiaInv[i] && type == _materiaInv[i]->getType())
			return _materiaInv[i]->clone();
	}
	return NULL;
}
