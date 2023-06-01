#include "FarmFunctions.h"
int main()
{
    FarmFunctions farm;
    vector<Pet*> pets;
    vector<string> foods = {"xuong", "ca","thoc","rau","cam"};
    //tao danh sach cac con vat
    pets = farm.createPets();
    farm.doFoodForPets(pets,foods);
    farm.makeSoundForPet(pets);
    farm.showAllPet(pets);
    
}