#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "colors.h"
#include <iostream>


int main()
{
	std::cout << COLOR_CYAN << "\n Basic Polymorphism Test \n" << COLOR_RESET;
	const Animal* animals[4];

	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Dog();
	animals[3] = new Cat();

	// Test getType() and makeSound()
	for (int i = 0; i < 4; ++i) {
		std::cout << animals[i]->getType() << " says: ";
		animals[i]->makeSound();
	}

	std::cout << COLOR_CYAN << "\n Deletion Test (Polymorphic Destruction) \n" << COLOR_RESET;
	for (int i = 0; i < 4; ++i)
		delete animals[i];

	std::cout << COLOR_CYAN << "\n--- Deep Copy Constructor Test ---\n" << COLOR_RESET;
	Dog doggy;
	doggy.setBrainIdea("Eat", 0);
	doggy.setBrainIdea("Burger", 1);

	Dog copyDoggy(doggy);  // copy constructor
	std::cout << COLOR_GREEN << "\nOriginal Dog idea[0]: " << doggy.getBrainIdea(0) << COLOR_RESET << "\n";
	std::cout << COLOR_GREEN << "Copy Dog idea[0]: " << copyDoggy.getBrainIdea(0) << "\n" << COLOR_RESET;

	// Modify the copy to check deep copy
	copyDoggy.setBrainIdea("String", 0);
	std::cout << COLOR_GREEN << "After modification:\n" << COLOR_RESET;
	std::cout << COLOR_GREEN << "Original Dog idea[0]: " << doggy.getBrainIdea(0) << "\n" << COLOR_RESET;
	std::cout << COLOR_GREEN << "Copy Dog idea[0]: " << copyDoggy.getBrainIdea(0)<< "\n" << COLOR_RESET;

	std::cout << COLOR_CYAN  << "\n Deep Copy Assignment Operator Test \n"  << COLOR_RESET;
	Cat cat1;
	Cat cat2;

	cat1.setBrainIdea("Sleep", 0);
	cat1.setBrainIdea("Scratch", 1);

	cat2 = cat1;  // assignment operator

	std::cout << COLOR_GREEN << "\ncat1 idea[0]: " << cat1.getBrainIdea(0) << "\n" << COLOR_RESET;
	std::cout << COLOR_GREEN << "cat2 idea[0]: " << cat2.getBrainIdea(0) << "\n" << COLOR_RESET;
	// Modify the copy
	cat2.setBrainIdea("Eat", 1);

	std::cout << COLOR_GREEN << "cat1 idea[0]: " << cat1.getBrainIdea(0) << "\n" << COLOR_RESET;
	std::cout << COLOR_GREEN << "cat2 idea[0]: " << cat2.getBrainIdea(0) << "\n" << COLOR_RESET;

	std::cout << COLOR_CYAN << "\nLarge Animal Array Test \n\n" << COLOR_RESET;
	const int SIZE = 20;
	Animal* zoo[SIZE];

	// Fill half Dogs, half Cats
	for (int i = 0; i < SIZE; ++i)
		zoo[i] = (i < SIZE / 2) ? (Animal*) new Dog() : (Animal*) new Cat();

	// Make all animals make sound
	std::cout << std::endl;
	for (int i = 0; i < SIZE; ++i)
		zoo[i]->makeSound();

	// Delete all
	std::cout << COLOR_GREEN << "\nDelete everything" << COLOR_RESET << std::endl;
	for (int i = 0; i < SIZE; ++i)
		delete zoo[i];
	return 0;
}
