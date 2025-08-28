#pragma once
#include <string>
#include "Animal.h"
using namespace std;

class AnimalsInZoo {
	public:
		AnimalsInZoo(Animal a);
		AnimalsInZoo();
		void display();

	private:
		int numAnimals;
		Animal animal;
};
