#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<setw(10)<<n[0][0]<<n[0][1]<<n[0][2]<<endl;
    cout<<setw(10)<<n[1][0]<<n[1][1]<<n[1][2]<<endl;
    cout<<setw(10)<<n[2][0]<<n[2][1]<<n[2][2]<<endl;
    return 0;
}