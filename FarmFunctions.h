#ifndef buoi8_FarmFunctions_h
#define buoi8_FarmFunctions_h
#include <vector>
#include "Pet.h"
using namespace std;
class FarmFunctions{
    public:
        vector<Pet*> createPets(); //tao danh sach cac vat nuoi
        void doFoodForPets(vector<Pet*> pets, vector<string> foods);
        void makeSoundForPet(vector<Pet*> pets);
        void showAllPet(vector<Pet*> pets); 
};

#endif