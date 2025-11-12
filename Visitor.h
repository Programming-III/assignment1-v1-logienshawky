#ifndef VISITOR_H
#define VISITOR_H
#include <iostream>
#include <string>
using namespace std;
class  Visitor{
    private:
    string vN;
    int tB;
    public:
    void dInfo();
    Visitor();
    Visitor(int ca,int co);
    ~Visitor();
    
};
#endif
