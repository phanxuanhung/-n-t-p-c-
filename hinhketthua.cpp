#include <iostream>
#include <string>
#include <cmath>

class HinhHoc {
protected:
    std::string color;

public:
    // Default constructor
    HinhHoc() {
        color = "";
    }

    // Constructor with parameter
    HinhHoc(const std::string& c) {
        color = c;
    }

    // Getter for color
    std::string getColor() const {
        return color;
    }

    // Setter for color
    void setColor(const std::string& c) {
        color = c;
    }

    // Pure virtual function to calculate area
    virtual float tinhDienTich() const = 0;
};

class HinhTamGiac : public HinhHoc {
private:
    float canhA;
    float canhB;
    float canhC;

public:
    // Default constructor
    HinhTamGiac() : HinhHoc() {
        canhA = 0.0;
        canhB = 0.0;
        canhC = 0.0;
    }

    // Constructor with parameters
    HinhTamGiac(const std::string& c, float a, float b, float c) : HinhHoc(c) {
        canhA = a;
        canhB = b;
        canhC = c;
    }

    // Getter for canhA
    float getCanhA() const {
        return canhA;
    }

    // Setter for canhA
    void setCanhA(float a) {
        canhA = a;
    }

    // Getter for canhB
    float getCanhB() const {
        return canhB;
    }

    // Setter for canhB
    void setCanhB(float b) {
        canhB = b;
    }

    // Getter for canhC
    float getCanhC() const {
        return canhC;
    }

    // Setter for canhC
    void setCanhC(float c) {
        canhC = c;
    }

    // Override the pure virtual function to calculate area
    float tinhDienTich() const {
        // Sử dụng công thức Heron để tính diện tích tam giác
        float p = (canhA + canhB + canhC) / 2;
        return std::sqrt(p * (p - canhA) * (p - canhB) * (p - canhC));
    }
};

int main() {
    HinhTamGiac htg("Vang", 3.0, 4.0, 5.0);
    std::cout << "Color: " << htg.getColor() << std::endl;
    std::cout << "Canh A: " << htg.getCanhA() << std::endl;
    std::cout << "Canh B: " << htg.getCanhB() << std::endl;
    std::cout << "Canh C: " << htg.getCanhC()
