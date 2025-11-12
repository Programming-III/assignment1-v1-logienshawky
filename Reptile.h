#ifndef Reptile_H
#define Reptile_H
#include <iostream>
#include <string>
using namespace std;
class Reptile: public Animal{
    private:
    bool isV;
    public:
    float getW();
    void setV(bool v);
    Reptile();
    Reptile(string n,int a,bool b,bool v);
    ~Reptile();
};
#endif
