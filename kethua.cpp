#include <iostream>
using namespace std;

class Shape {
protected:
    int width;
    int height;

public:
    Shape(int w, int h) : width(w), height(h) {}

    int getWidth() const {
        return width;
    }

    int getHeight() const {
        return height;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(int w, int h) : Shape(w, h) {}

    int getArea() {
        return getWidth() * getHeight();
    }

    void setWidth(int w) {
        width = w; // Gán giá trị mới cho width
    }

    void setHeight(int h) {
        height = h; // Gán giá trị mới cho height
    }
};

int main() {
    Rectangle rect(5, 3);
    rect.setWidth(7); // Gọi phương thức setter để thiết lập giá trị mới cho width
    rect.setHeight(4); // Gọi phương thức setter để thiết lập giá trị mới cho height

    cout << "Width: " << rect.getWidth() << endl; // Truy cập phương thức getter để lấy giá trị hiện tại của width
    cout << "Height: " << rect.getHeight() << endl; // Truy cập phương thức getter để lấy giá trị hiện tại của height
    cout << "Area: " << rect.getArea() << endl; // Gọi phương thức để tính diện tích của hình chữ nhật

    return 0;
}
