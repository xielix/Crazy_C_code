
//模块化：按照功能分类：输入初始化时间、计算秒分钟，输出显示时间。一个函数一个功能
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
//获取初始化时间
int Get_Init_Time(int Time_Inf[]);

//先计算秒
int Counter_Sec(int sec);

//计算分
int Counter_Min(int min);

//计算时
int Counter_Hour(int hour);

//输出总时间
int Show_Time(int Time_Inf[]);

int Get_Init_Time(int Time_Inf[])                  //给数组里面时分秒赋值
{
    printf("请输入初始化时间：");
    scanf("%d %d %d",&Time_Inf[0],&Time_Inf[1],&Time_Inf[2]);

    return 0;
}

int Counter_Sec(int sec)
{
    if(++sec==60)
    {
        sec=0;
    }

    return sec;
}

int Counter_Min(int min)
{
    if(++min==60)
    {
        min=0;
    }

    return min;
}

int Counter_Hour(int hour)
{
    if(++hour==24)
    {
        hour=0;
    }

    return hour;
}

int Show_Time(int Time_Inf[])
{
    system("clear");
    printf("北京时间是：%d:%d:%d\n",Time_Inf[0],Time_Inf[1],Time_Inf[2]);

    return 0;
}

int main()
{
    int Time_Inf[3]; 
    Get_Init_Time(Time_Inf);    //数组名表示首元素地址

    while(1)
    {
        sleep(1);
        Time_Inf[2]=Counter_Sec(Time_Inf[2]);
        if(Time_Inf[2]==0)
        {
            Time_Inf[1]=Counter_Min(Time_Inf[1]);
            if(Time_Inf[1]==0)
            {
                    Time_Inf[0]=Counter_Hour(Time_Inf[0]);
            }
        }
Show_Time(Time_Inf);

    }






    return 0;
}