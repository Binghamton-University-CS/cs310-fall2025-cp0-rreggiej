#pragma once
#include <string>
#include <stdlib.h>
using namespace std;

class Animal {
   public:
      Animal(std::string speciesName, unsigned int discoveryYear);
      Animal();

      void display();

   private:
      std::string species;
      unsigned int year_discovered;
};
