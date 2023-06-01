#ifndef buoi8_Pig_h
#define buoi8_Pig_h
#include <iostream>
using namespace std;
#include "Pet.h"
class Pig : public Pet{
    public:
    Pig(string name, float weight, string color, int age):Pet(name, weight, color, age){}
    bool Eat(string food){
        if(food.compare("cam")==0){
            this->setWeight(this->getWeight() + 7);
            return true;
        }
        return false;
    }
    string Sound(){

        return  " EC ec ec ec ec ec ....." ;
    }
    // // void EC (){
    //       cout << " EC ec ec ec ec ec ....." << endl;
    // } 
    
};


#endif