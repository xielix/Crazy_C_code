#include<stdio.h>
int main()
{

for(int i=100;i<1000;i++)
{
int a=i/10;
int b=a%10;    //分解出十位数
int c=i/100;  //百位数
int d=i%10;   //个位数
if((b*b*b+c*c*c+d*d*d)==i)
printf("%d  ",i);
}
    return 0;
}