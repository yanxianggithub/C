#include<Windows.h>
#include<stdio.h>
#include<time.h>
int hour,minute,second,day=0;
void add()
{
    if(second==60)
    {
        second=0;
        minute++;
    }
    if(minute==60)
    {
        minute=0;
        hour++;
    }
    if(hour==24)
    {
        hour==0;
        day++;
        exit(0);
    }
}

void display()
{
    printf("%d:%d:%d",t->tm_hour+8,t->tm_min,t->tm_sec);
}

int main()
{
    time_t ttime;
    struct tm *t;
    time(&ttime);
    t=localtime(&ttime);
    while (1)
    {
        add();
        display(t);
        Sleep(1000);
        system("cls");
    }
    return 0;
}