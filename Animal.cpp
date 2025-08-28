#include "Animal.h"
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

Animal::Animal(std::string speciesName, unsigned int discoveryYear) {
         species = speciesName;
         year_discovered = discoveryYear;
}

Animal::Animal() : species(""), year_discovered(0) {};

void Animal:: display() {
       	std::cout << species << " [" << year_discovered << "]" << endl;
}
    
