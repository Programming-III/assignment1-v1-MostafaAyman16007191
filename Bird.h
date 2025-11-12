#include "Animal.h"
#ifndef BIRD_H
#define BIRD_H
#include <iostream>
#include <string>
using namespace std;

class Bird : public Animal{
    private:
    float wingSpan;
    
    public:
    Bird();
    Bird(string n, int a, bool i, float w);
    ~Bird();
    float getWingSpan();
    void setWingSpan(float w);
};

#endif;
