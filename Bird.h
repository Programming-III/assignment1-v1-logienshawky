#ifndef BIRD_H
#define BIRD_H
#include <iostream>
#include <string>
using namespace std;
class Bird: public Animal{
    private:
    float wing;
    public:
    float getW();
    void setW(float w);
    Bird();
    Bird(string n,int a,bool b,float w);
    ~Bird();
};
#endif
