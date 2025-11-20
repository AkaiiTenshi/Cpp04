#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria* _inventory[4];
		std::string _name;
		int _inventoryI;

	public:
		Character(const std::string name);
		Character(const Character &other);
		Character &operator=(const Character &other);
		virtual ~Character() {}

		virtual std::string const & getName() const;

		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};


