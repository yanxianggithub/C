#include<iostream>
using namespace std;
class Clock
{
private:
    int hour,minute,second;
public:
    Clock(int h=0,int m=0,int s=0):hour(h),minute(m),second(s){}
    Clock();
    ~Clock(){}
};

Clock::Clock()
{
    time_t t;
    struct tm tt;
    t=time(NULL);
    localtime_s(&tt,&t);
    h=tt.tm_hour;
    m=tt.tm_min;
    s=tt.tm_sec;
}








int mian()
{



}