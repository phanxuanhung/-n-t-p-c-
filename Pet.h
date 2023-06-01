#ifndef buoi8_Pet_h
#define buoi8_Pet_h
#include <iostream>
using namespace std;

class Pet
{
    private:
        int ID;
        string Name;
        float Weight;
        string Color;
        int Age;

    public:
        Pet(){}
        Pet(string name, float weight, string color, int age){
            this->Name = name;
            this->Weight = weight;
            this->Color = color;
            this->Age = age;
        }

        virtual bool Eat(string food) = 0;
        virtual string Sound() = 0;
        void setWeight(float weight){
            this->Weight = weight;
        }
        float getWeight(){
            return this->Weight;
        }
        void ShowMe(){
            cout << "Pet name: " << Name << ", Weight: " << Weight << ", Color: " << Color << ", Age: " << Age << endl;
        }
        
};
#endif