#include "Animal.h"
#ifndef REPTILE_H
#define REPTILE_H
#include <iostream>
#include <string>
using namespace std;

class Reptile : public Animal{
    private:
    bool isVenomous;
    
    public: 
    Reptile();
    Reptile(string n, int a, bool i, bool v);
    ~Reptile();
    bool getIsVenomous();
    void setIsVenomous();
};

#endif
