#ifndef buoi8_Chicken_h
#define buoi8_Chicken_h
#include <iostream>
using namespace std;
#include "Pet.h"
class Chicken : public Pet{
    public:
    Chicken(string name, float weight, string color, int age):Pet(name, weight, color, age){}
    bool Eat(string food){
        if(food.compare("thoc")==0){
            this->setWeight(this->getWeight() + 0.5);
            return true;
        }
        return false;
    }
    string Sound (){
        return  " OOOOOOO o o o o o o o ....." ;
    }
    // void Gay (){
    //     cout << " OOOOOOO o o o o o o o ....." << endl;
    // }
};

#endif