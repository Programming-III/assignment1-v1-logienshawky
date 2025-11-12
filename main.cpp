#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
#include <string>
using namespace std;

void Animal:: display(){
    cout<< name<< "(" <<"Age:" << age <<","<< isH << endl;
}
 void Animal::feed(){
     if (isH)
     cout<<"Animal is hungry"<< endl;
     else 
     cout<<"Animal is not hungry"<< endl;
 }
 Animal::Animal(){
     
 }
 Animal:: Animal(string n,int a,bool b){
     name=n;
     age=a;
     isH=b;
 }
 Animal:: ~Animal(){
 }
   Mammal::Mammal();
   {
       
   }
    Mammal::Mammal(string n,int a,bool b,string fur): Animal(n,a,b){
       furC=fur; 
    }
    Mammal::~Mammal(){
        
    }
     Bird:: Bird(){
         
     }
    Bird::Bird(string n,int a,bool b,float w): Animal(n,a,b){
        wing=w;
    }
   Bird::~Bird(){
       
   }
    Reptile::Reptile(){
        
    }
    Reptile::Reptile(string n,int a,bool b,bool v) Animal(n,a,b){
        isV=v;
    }
    Reptile::~Reptile(){
        
    }
     void Enclosure:: addAnimal(Animal *a){
         int count++;
         Animal * new=new Animal[count];
         for (int i=0;i<count-1; i++){
             
         }
     }
    void Enclosure:: displayAnimals();
    Enclosure::Enclosure(){
        
    }
   Enclosure::Enclosure(int ca,int co);
   Enclosure:: ~Enclosure(){
       
   }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
