#include <iostream>
using namespace std;
const float PI = 3.14f;
class Shape {};
class TwoDimShape :virtual public Shape {
public:
    virtual float area() = 0;
};
class ThreeDimShape :virtual public Shape {
public:
    virtual float area() = 0;
    virtual float volume() = 0;
};
class Triangle : public TwoDimShape {
    float base;
    float high;
public:
    Triangle() :base(0), high(0) {}
    Triangle(float b, float h) :base(b), high(h) {}
    float area() { return base * high / 2; }
};
class Circle :public TwoDimShape {
protected:
    float R;
public:
    Circle(float r) :R(r) {}
    float area() { return PI * R * R; }
};
class Rectangle :TwoDimShape {
    float len;
    float wid;
public:
    Rectangle() :len(0), wid(0) {}
    Rectangle(float l, float w) :len(l), wid(w) {}
    float area() { return len * wid; }
};
class Cube : public ThreeDimShape {
    float side;
public:
    Cube() :side(0) {}
    Cube(float s) :side(s) {}
    float area() { return 6 * side * side; }
    float volume() { return side * side * side; }
};
class Globe :ThreeDimShape {
    float R;
public:
    Globe() :R(0) {}
    Globe(float r) :R(r) {}
    float area() { return 4 * PI * R * R; }
    float volume() { return PI * R * R * R * 4 / 3; }
};
int main() {
    Triangle T(7, 8);
    Circle C1(6);
    Rectangle R(1, 2);
    Cube C2(5);
    Globe G(4);
    cout << "Triangle area:" << T.area() << endl;
    cout << "Circle area:" << C1.area() << endl;
    cout << "Rectangle area:" << R.area() << endl;
    cout << "Cube area:" << C2.area() << "Cube volume:" << C2.volume() << endl;
    cout << "Globe area:" << G.area() << "Globe volume:" << G.volume() << endl;
    return 0;
}
