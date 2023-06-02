#include <iostream>
#include <string>

using namespace std;

// Lớp HinhHoc mô tả hình học chung
class HinhHoc {
protected:
    string mauSac;

public:
    // Hàm dựng mặc định
    HinhHoc() {
        mauSac = "";
    }

    // Hàm dựng có tham số
    HinhHoc(const string& mau) {
        mauSac = mau;
    }

    // Phương thức getter
    string getMauSac() const {
        return mauSac;
    }

    // Phương thức setter
    void setMauSac(const string& mau) {
        mauSac = mau;
    }

    // Hàm ảo pure virtual function tính diện tích
    virtual float tinhDienTich() const = 0;
};

// Lớp HinhChuNhat mô tả hình chữ nhật kế thừa từ lớp HinhHoc
class HinhChuNhat : public HinhHoc {
private:
    float chieuDai;
    float chieuRong;

public:
    // Hàm dựng mặc định
    HinhChuNhat() : HinhHoc() {
        chieuDai = 0;
        chieuRong = 0;
    }

    // Hàm dựng có tham số
    HinhChuNhat(const string& mau, float dai, float rong) : HinhHoc(mau) {
        chieuDai = dai;
        chieuRong = rong;
    }

    // Phương thức getter
    float getChieuDai() const {
        return chieuDai;
    }

    float getChieuRong() const {
        return chieuRong;
    }

    // Phương thức setter
    void setChieuDai(float dai) {
        chieuDai = dai;
    }

    void setChieuRong(float rong) {
        chieuRong = rong;
    }

    // Implement hàm ảo tính diện tích của hình chữ nhật
    float tinhDienTich() const override {
        return chieuDai * chieuRong;
    }
};

// Lớp HinhVuong mô tả hình vuông kế thừa từ lớp HinhHoc
class HinhVuong : public HinhHoc {
private:
    float canh;

public:
    // Hàm dựng mặc định
    HinhVuong() : HinhHoc() {
        canh = 0;
    }

    // Hàm dựng có tham số
    HinhVuong(const string& mau, float c) : HinhHoc(mau) {
        canh = c;
    }

    // Phương thức getter
    float getCanh() const {
        return canh;
    }

    // Phương thức setter
    void setCanh(float c) {
        canh = c;
    }

    // Implement hàm ảo tính diện tích của hình vuông
    float tinhDienTich() const override {
        return canh * canh;
    }
};

int main() {
    // Tạo đối tượng HinhChuNhat
    HinhChuNhat hcn("Xanh", 5, 3);

    // Sử dụng các hàm getter
    cout << "Hinh chu nhat" << endl;
    cout << "Mau sac: " << hcn.getMauSac() << endl;
    cout << "Chieu dai: " << hcn.getChieuDai() << endl;
    cout << "Chieu rong: " << hcn.getChieuRong() << endl;

    // Sử dụng hàm tính diện tích
    cout << "Dien tich: " << hcn.tinhDienTich() << endl;

    // Tạo đối tượng HinhVuong
    HinhVuong hv("Do", 4);

    // Sử dụng các hàm getter
    cout << "Hinh vuong" << endl;
    cout << "Mau sac: " << hv.getMauSac() << endl;
    cout << "Canh: " << hv.getCanh() << endl;

    // Sử dụng hàm tính diện tích
    cout << "Dien tich: " << hv.tinhDienTich() << endl;

    return 0;
}
