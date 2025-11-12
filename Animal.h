#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

#include <iostream>
#include <string>
#ifndef ANIMAL_H
#define ANIMAL_H
using namespace std;

class Animal{
private:
 string name;
  int age;
  bool isH;
public:
   string getN();
   int getA();
   bool getisH();
   void setN(string n);
   void setA(int a);
   void setisH(bool b);
   Animal();
   Animal(string n,int a,bool b);
  ~ Animal();
  void display();
  void feed();
};
#endif
 



#endif
