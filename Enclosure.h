#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include <iostream>
#include <string>
using namespace std;
class  Enclosure{
    private:
    Animal* animals;
    int cap;
    int count;
    public:
    
    int getCap();
    int getCount();
    void setCount(int c);
    void addAnimal(Animal *a);
    void displayAnimals();
    Enclosure();
   Enclosure(int ca,int co);
    ~Enclosure();
    
};
#endif
