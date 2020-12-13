#include<iostream>
#include<Windows.h>
#include<time.h>
using namespace std;
class Clock
{
public:
	int hour, minute, second;
	Clock(int h, int m, int s) :hour(h), minute(m), second(s) {}
	Clock();
	~Clock() {}
};

Clock::Clock()
{
	time_t t;
	struct tm tt;
	t = time(NULL);
	localtime_s(&tt, &t);
	hour = tt.tm_hour;
	minute = tt.tm_min;
	second = tt.tm_sec;
}

void add_sec(Clock& C);
void display_time(Clock& C);

int main()
{
	//获取本地时间
	Clock C;
	//手动设置时间
	//Clock C(2,3,4);
	while (1)
	{
		display_time(C);
		add_sec(C);
		Sleep(1000);
		system("cls");
	}
	return 0;
}

void add_sec(Clock& C)
{
	C.second++;
	if (C.second >= 60)
	{
		C.minute++;
		C.second = 0;
		if (C.minute >= 60)
		{
			C.minute = 0;
			C.hour++;
			if (C.hour >= 12)
			{
				C.hour = 0;
			}

		}

	}

}

void display_time(Clock& C)
{
	cout << C.hour << "时" << C.minute << "分"
		<< C.second<< "秒" << endl;
}