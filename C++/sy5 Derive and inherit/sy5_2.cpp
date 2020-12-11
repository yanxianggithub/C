#include <iostream>
using namespace std;
class Base1
{
public:
    Base1() { cout << "constructing Base1" << endl; }
};
class Base2
{
public:
    Base2() { cout << "constructing Base2" << endl; }
};
class Derived1 : public Base1, virtual public Base2
{
public:
    Derived1() { cout << "constructing Derived1" << endl; }
};
class Derived2 : public Base1, virtual public Base2
{
public:
    Derived2() { cout << "constructing Derived2" << endl; }
};
class Derived3 : public Derived1, virtual public Derived2
{
public:
    Derived3() { cout << "constructing Derived3" << endl; }
};
int main()
{
    Derived3 obj;
    return 0;
}
