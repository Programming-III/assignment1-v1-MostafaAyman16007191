#include "Animal.h"
#ifndef MAMMAL_H
#define MAMMAL_H
#include <iostream>
#include <string>
using namespace std;

class Mammal : public Animal{
   private:
   string furColor;
   
   public:
   Mammal();
   Mammal(string n, int a, bool i, string f);
   ~Mammal();
   string getFurColor();
   void setFurColor(string f);
} ;

#endif
