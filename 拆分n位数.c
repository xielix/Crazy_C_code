
#include<stdio.h>
int main()
{
int num=0;
printf("请输入要拆分的数。\n");
scanf("%d",&num);
while(1)
{
    if(num/10==0)   //先判断是个位数还是多位数
    {
    printf("%d\n",num); 
    break;
    }
    else
    {
    printf("%d\n",num%10);
    num=num/10;
    }
}





    return 0;

}
