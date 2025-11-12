/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
#include <string>
using namespace std;

Animal::Animal(){}

Animal::Animal(string n, int a, bool i){
    name(n);
    age(a);
    isHungry(i);
}

Animal::~Animal(){}

string Animal::getName(){
    return name;
}

void Animal::setName(string n){
    name = n;
}

int Animal::getAge(){
    return age;
}

void Animal::setAge(int a){
    age = a;
}

void Animal::display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Hungry: "<<isHungry<<endl;
}

void feed(){
    if(isHungry)
        cout<<"Aniaml is hungry"<<endl;
    else
        cout<<"Aniaml is not hungry"<<endl;
}


Mammal::Mammal(){}

Mammal::Mammal(string n, int a, bool i, string f) : Animal(string n, int a, bool i), furColor(f){
}

Mammal::~Mammal(){}

string Mammal::getFurColor(){
    return furColor;
}

void Mammal::setFurColor(string f){
    furColor = f;
}


Bird::Bird(){}

Bird::Bird(string n, int a, bool i, float w) : Animal(string n, int a, bool i), wingSpan(w){
}

Bird::~Bird(){}

float Bird::getWingSpan(){
    return wingSpan;
}

void Bird::setWingSpan(float w){
    wingSpan = w;
}


Reptile::Reptile(){}

Reptile::Reptile(string n, int a, bool i, bool v) : Animal(string n, int a, bool i), isVenomous(v){
}

Reptile::~Reptile(){}

bool Reptile::getIsVenomous(){
    return isVenomous;
}

void Reptile::setIsVenomous(bool v){
    isVenomous = v;
}


Enclosure::Enclosure(){}

Enclosure::Enclosure(animal *animal, int cap, int curr){
    animal = new Animal[capacity];
    capacity(cap);
    currentCount(curr);
}

Enclosure::~Enclosure(){
    delete[] animal;
}

void Enclosure::addAnimal(Animal* a){
    if(capacity>currentCount){
        animal[currentCount++] = a;
    }
    else{
        cout<<"Full"<<endl;
    }
}

void displayAnimals(){
    cout<<animal[0] -> display()<<endl;
}


Visitor::Visitor(){}

Visitor::Visitor(string v, int t){
    visitorName = v;
    ticketsBought = t;
}

Visitor::~Visitor(){}

void displayInfo(){
    cout<<"Name: "<<visitorName<<endl;
    cout<<"Tickets: "<<ticketsBought<<endl;
}


int main()
{
 

    return 0;
}
