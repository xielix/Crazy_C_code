#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define arr_len 10

int arr[arr_len];

int show_arr();
int show_arr()
{
 for(int lp=0;lp<arr_len;lp++)
    {
    printf("%d    ",arr[lp]);
    }
return 0;
}


int make_arr();
int make_arr()
{
    srand(time(0));
    for(int lp=0;lp<arr_len;lp++)
    {
    arr[lp]=rand()%100;
    }
    return 0;
}

int arr_order();
int arr_order()
{
    for(int m=0;m<arr_len-1;m++)
    {
        for(int n=m+1;n<arr_len;n++)
        {
            if(arr[m]<arr[n])
            {
                int temp=arr[m];
                arr[m]=arr[n];
                arr[n]=temp;
            }
        }
    }
    return 0;
}

int main()
{
printf("排序之前\n");

make_arr();              //随机生成10位数据

show_arr();              //打印生成的10个随机数

printf("\n");

printf("排序之后。\n");   

arr_order();           //10个随机数从小到大排序

show_arr();             //打印排序好的的10个随机数

    return 0;

}