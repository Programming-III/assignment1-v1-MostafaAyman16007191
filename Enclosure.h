#include "Animal.h"
#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include <iostream>
#include <string>
using namespace std;

class Enclosure{
    private:
    animal *Animal;
    int capacity;
    int currentCount;
    
    public:
    Enclosure();
    Enclosure(animal *animal, int cap, int curr);
    ~Enclosure();
    void addAnimal(Animal* a);
    void displayAnimals();
};

#endif
