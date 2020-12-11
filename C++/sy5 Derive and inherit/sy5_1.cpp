#include<iostream>
using namespace std;
class A
{
public:
	void seta(int i) { a = i; }
	int geta() { return a; }
public:
	int a;
};
class B :public A
{
public:
	void setb(int i) { b = i; }
	int getb() { return b; }
	void show() { cout << "A::a=" << a << endl; }
public:
	int b;
};
int main()
{
	B bb;
	bb.seta(6);
	bb.setb(3);
	bb.show();
	cout << "A::a=" << bb.a << endl;
	cout << "B::b=" << bb.b << endl;
	cout << "A::a=" << bb.geta() << endl;
	cout << "B::b=" << bb.getb() << endl;
	return 0;
}
