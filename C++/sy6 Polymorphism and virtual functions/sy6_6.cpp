#include <iostream>
using namespace std;
const float PI = 3.14f;
class Shape
{
public:
    virtual void area() = 0;
    virtual void volume() = 0;
};
class TwoDimShape :virtual public Shape {};
class ThreeDimShape :virtual public Shape {};
class Triangle : public TwoDimShape
{
    float base;
    float high;
public:
    Triangle() :base(0), high(0) {}
    Triangle(float b, float h) :base(b), high(h) {}
    void area() 
    { 
        cout << "area:"<<base * high / 2 << endl;
    }
    void volume() 
    { 
        cout << "not volume." << endl;
    }
};
class Circle :public TwoDimShape
{
protected:
    float R;
public:
    Circle(float r) :R(r) {}
    void area() 
    { 
        cout << "area:" << PI * R * R << endl;
    }
    void volume() 
    { 
        cout << "not volume." << endl; 
    }
};
class Rectangle :public TwoDimShape
{
    float len;
    float wid;
public:
    Rectangle() :len(0), wid(0) {}
    Rectangle(float l, float w) :len(l), wid(w) {}
    void area() 
    {
        cout << "area:" << len * wid << endl; 
    }
    void volume()
    { 
        cout << "not volume." << endl;
    }
};
class Cube : public ThreeDimShape
{
    float side;
public:
    Cube() :side(0) {}
    Cube(float s) :side(s) {}
    void area() 
    {
        cout << "area:" << 6 * side * side << endl;
    }
    void volume()
    {
        cout << "volume:" << side * side * side << endl;
    }
};
class Globe :public ThreeDimShape
{
    float R;
public:
    Globe() :R(0) {}
    Globe(float r) :R(r) {}
    void area()
    {
        cout << "area:" << 4 * PI * R * R << endl;
    }
    void volume()
    { 
        cout << "volume:"<<PI * R * R * R * 4 / 3 << endl;
    }
};
void display(Shape* p)
{
    p->area();
    p->volume();
}
int main()
{
    Triangle T(7, 8);
    Circle C1(6);
    Rectangle R(1, 2);
    Cube C2(5);
    Globe G(4);
    Shape* p = NULL;
    p = &T;
    display(p);
    p = &C1;
    display(p);
    p = &R;
    display(p);
    p = &C2;
    display(p);
    p = &G;
    display(p);
    return 0;
}