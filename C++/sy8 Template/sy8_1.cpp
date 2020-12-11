#include<iostream>
using namespace std;
template < class T>
T max(T a,T b)
{
return a>b?a:b;
}
int max(int a,int b)
{
return a>b?a:b;
}
int main()
{
cout<< "max(6,5) is "<<max( 6, 5)<< endl;
cout<< "max('6','5') is "<<max( 6, 5)<< endl;
return 0;
}