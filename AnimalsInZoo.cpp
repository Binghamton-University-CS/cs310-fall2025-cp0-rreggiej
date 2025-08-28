#include "AnimalsInZoo.h"
#include "Animal.h"
#include <iostream>

using namespace std;

AnimalsInZoo::AnimalsInZoo(Animal a) {
	animal = a;
	numAnimals = 1;
}

AnimalsInZoo::AnimalsInZoo() {
	numAnimals = 0;
}

void AnimalsInZoo:: display() {
	std::cout << "Number of animals: " << numAnimals << endl;
	if (numAnimals > 0) {
		animal.display();
	}
}
