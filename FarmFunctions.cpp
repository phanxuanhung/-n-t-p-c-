#include "FarmFunctions.h"
#include "Dog.h"
#include "Cat.h"
#include "Chicken.h"
#include "Pig.h"
#include <iostream>
using namespace std;
vector<Pet*> FarmFunctions::createPets(){
    Dog *dog = new Dog("cho", 4, "yellow", 2);
    Cat *cat1 = new Cat("meo1", 20, "white", 1);
    Cat *cat2 = new Cat("meo2", 10, "black", 3);
    Chicken *chicken = new Chicken("ga", 2.7, "red", 3);
    Pig *pig = new Pig("heo", 50, "pink", 2);

    vector<Pet*> pets;
    pets.push_back(dog); // up casting
    pets.push_back(cat1);
    pets.push_back(cat2);
    pets.push_back(chicken);
    pets.push_back(pig);

    return pets;

}

void FarmFunctions::showAllPet(vector<Pet*> pets){
    for(auto pet : pets){
        pet->ShowMe();
    }
}
void FarmFunctions::doFoodForPets ( vector<Pet*>pets, vector<string> foods){
    for (auto pet : pets){
        for (int i = 0; i < foods.size(); i++){
            if (pet -> Eat(foods [i])){ //ăn k hết
                // foods [i] = ""; ăn hết 
            }
        }
    }
}
// void FarmFunctions :: makeSoundForPet (vector <Pet*> pets){
//     for (auto pet : pets){
//         if (Dog *d = dynamic_cast <Dog*>(pet)){
//             d -> Gau ();
//         }else if ( Cat * c = dynamic_cast <Cat*>(pet)){
//             c ->Meo();
//         }else if ( Chicken * ck = dynamic_cast <Chicken*>(pet)){
//             ck ->Gay();
//         }else if ( Pig * p = dynamic_cast <Pig*>(pet)){
//             p ->Ec();
//         }
//     }
// }
void FarmFunctions :: makeSoundForPet (vector <Pet*> pets){
    for(auto pet : pets){
        pet->Sound();
}
}