#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
using namespace std;

class Animal{
    private:
    string name;
    int age;
    bool isHungry;
    
    public:
    Animal();
    Animal(string n, int a, bool i);
    ~Animal();
    string getName();
    void setName(string n);
    int getAge();
    void setAge(int a);
    void display();
    void feed();
};

#endif 
