#include<stdio.h>
int main()
{
printf("请输入两个数。\n");
int a=0,b=0;
scanf("%d %d",&a,&b);

int min=a<b?a:b;
int max=0;
for(int i=1;i<min;i++)
{
if(a%i==0&&b%i==0)
max=i;         //不断刷新
}

printf("最大公约数是：%d\n",max);

    return 0;
}