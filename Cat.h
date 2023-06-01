#ifndef buoi8_Cat_h
#define buoi8_Cat_h
#include <iostream>
using namespace std;
#include "Pet.h"
class Cat : public Pet{
    public:
    Cat(string name, float weight, string color, int age):Pet(name, weight, color, age){}
    bool Eat(string food){
        if(food.compare("ca")==0){
            this->setWeight(this->getWeight() + 0.8);
            return true;
        }
        return false;
    }
    string Sound (){
        return  " Meow meow meow meow meow ....." ;
    }
    // void Meo(){
    //     cout << " Meow meow meow meow meow ....." << endl;
    // }
};

#endif