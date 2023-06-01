#include<iostream>
using namespace std;
class DienThoai {
    private:
        string tensanpham;
        float giaban;
        float kichthuocmanhinh;
        int *dungluongpin;
    public:
        DienThoai(){
            tensanpham = "";
            giaban =0;
            kichthuocmanhinh = 0;
            dungluongpin = nullptr;
        }
        DienThoai (string _tensanpham, float _gia , float _manhinh, int pin){
            tensanpham = _tensanpham;
            giaban = _gia;
            kichthuocmanhinh = _manhinh;
            dungluongpin = new int;
            *dungluongpin = pin;

        }
        DienThoai(const DienThoai &dt){
            tensanpham = dt.tensanpham;
            giaban = dt.giaban;
            kichthuocmanhinh = dt.kichthuocmanhinh;
            *dungluongpin = *dt.dungluongpin;

        }
        ~DienThoai (){
            delete dungluongpin;
        }
        string gettensanpham()const{
            return tensanpham;

        }
        void settensanpham(string _tensanpham){
            tensanpham = _tensanpham;
        }
        float getgiaban ()const{
            return giaban;
        }
        void setgiaban( float _giaban){
            giaban = _giaban;
        }
        float getkichthuocmanhinh () const{
            return kichthuocmanhinh;

        }
        void setkichthuocmanhinh (float _manhinh){
            kichthuocmanhinh = _manhinh;
        }
        int *getdungluongpin (int *pin){
            return dungluongpin;
        }
        void setdungluongpin (int *pin){
            *dungluongpin = *pin;
        }
        
        void HienThi(){
            cout << "ten sp"<< tensanpham<< endl;
            cout << "gia"<< giaban<< endl;
            cout << "kich thuoc"<< kichthuocmanhinh<<endl;
            cout << "dung luong"<< *dungluongpin<<endl;
        }
        bool operator==(const DienThoai &dt1, const DienThoai &dt2) {
    return (dt1.getgiaban() == dt2.getgiaban() &&
            dt1.getkichthuocmanhinh() == dt2.getkichthuocmanhinh() &&
            *dt1.getdungluongpin() == *dt2.getdungluongpin());
}
};
// bool operator==(const DienThoai &dt1, const DienThoai &dt2) {
//     return (dt1.getgiaban() == dt2.getgiaban() &&
//             dt1.getkichthuocmanhinh() == dt2.getkichthuocmanhinh() &&
//             *dt1.getdungluongpin() == *dt2.getdungluongpin());
// }

int main (){
    int pin1 = 3000;
    int pin2 = 2000;
    DienThoai dt1("12promax", 30000000, 6.7, pin1);
    DienThoai dt3("11promax", 70000000, 6.7, pin2);
    dt1.HienThi();
     // Sử dụng phương thức operator==
    // if (dt1 == dt2) {
    //     cout << "Hai dien thoai giong nhau." << endl;
    // } else {
    //     cout << "Hai dien thoai khac nhau." << endl;
    // }
    // return 0;

}
