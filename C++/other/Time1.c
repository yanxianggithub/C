#include<stdio.h>
#include<time.h>
#include<Windows.h>
struct Time
{
    int hour;
    int minute;
    int second;
}tt;
void set_time(struct Time *tt);
void get_time(struct Time *tt);
void add_sec(struct Time *tt);
int main()
{
    set_time(&tt);
    while (1)
    {
        get_time(&tt);
        add_sec(&tt);
        Sleep(1000);
        system("cls");
    }
    return 0;
}
void set_time(struct Time *tt)
//设置时间
/* {
    printf("请输入h，m，s（用空格隔开）：");
    scanf("%d %d %d",&tt->hour,&tt->minute,&tt->second);
} */
//获取本地时间
{
    time_t t;
    struct tm tmm;
    t=time(NULL);
    localtime_s(&tmm,&t);
    tt->hour=tmm.tm_hour;
    tt->minute=tmm.tm_min;
    tt->second=tmm.tm_sec;
}

void get_time(struct Time *tt)
{
    printf("%d:%d:%d",tt->hour,tt->minute,tt->second);
}

void add_sec(struct Time *tt)
{
    tt->second++;
    if(tt->second>=60)
    {
        tt->minute++;
        tt->second=0;
        if(tt->minute>=60)
        {
            tt->minute=0;
            tt->hour++;
            if(tt->hour>=12)
            {
                tt->hour=0;
            }
        }
    }
}