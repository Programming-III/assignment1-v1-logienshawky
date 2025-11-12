#ifndef MAMMAL_H
#define MAMMAL_H
#include <iostream>
#include <string>
using namespace std;
class Mammal: public Animal{
    private:
    string furC;
    public:
    string getfurC();
    void setfurC(string f);
    Mammal();
    Mammal(string n,int a,bool b,string fur);
    ~Mammal();
};
#endif
