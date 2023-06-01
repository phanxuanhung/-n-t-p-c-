#include <iostream>
using namespace std;
class NhanVien{
    private:
    string ten;
    float luong;
    float phucap;
    int *thamnien;
    public:
    NhanVien () {
        ten = "";
        luong = 0;
        phucap = 0;
        thamnien = nullptr;

    }
    NhanVien (string _ten, float _luong , float _phucap, int _thamnien){
        ten = _ten;
        luong = _luong;
        phucap = _phucap;
        thamnien= new int;
        *thamnien = _thamnien;
    }
    NhanVien (const NhanVien& nv){
        ten = nv.ten;
        luong = nv.luong;
        phucap = nv.phucap;
        *thamnien = *nv.thamnien;
    }
    ~NhanVien (){
        delete = thamnien;
    }
    string getten ()const {
        return ten;
    }
    void setten (string _ten){
        ten = _ten;
    }
    float getluong()const{
        return luong;
    }
    void setluong ( float _luong){
        luong = _luong;
    }
    float gethucap ()const {
        return phucap;
    }
    void setphucap(float _phucap){
        phucap = _phucap;

    }
    int  *getthamnien (){
        return thamnien;
    }
    void setthamnien (){
        *thamnien = *thamnien;
    }
         
};
int main (){
    int thamnien1 = 3;
    int thamnien2 = 4;
   
    NhanVien  nv1("hung","70000", "500",thamnien1);
    cout << "Ten: " << nv1.getten() << endl;
    cout << "Luohg: " << nv1.getluong() << endl;
    cout << "Phụ cấp: " << nv1.getphucap() << endl;
    cout << "Thâm niên: " << *nv1.getthamnien() << endl;
}