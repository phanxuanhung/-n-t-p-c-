#ifndef buoi8_Dog_h
#define buoi8_Dog_h
#include "Pet.h"
class Dog : public Pet{
    public:
    Dog(string name, float weight, string color, int age):Pet(name, weight, color, age){}
    bool Eat(string food){
        if(food.compare("xuong")==0){
            this->setWeight(this->getWeight() + 1);
            return true;
        }
        return false;
    }
    string Sound(){
        return " Gau gau gau gau gau ....." ;
    }
    // void Gau (){
    //     cout << " Gau gau gau gau gau ....." << endl;
    // }
};

#endif