#include<stdio.h>

int strip(char *arr1);
int strip(char *arr1)                  
{
char arr2[200];
int n=0;

for(int m=0;m<200;m++)
{
    if((*(arr1+m))!=' ')
    {
        arr2[n]=(*(arr1+m));
        n++;
    }
}
printf("去掉空格后的字符串是:%s\n",arr2);

    return 0;
}

int main()
{

char arr1[200];

printf("请输入一个包含空格的字符串：");

fgets(arr1,sizeof(arr1),stdin);

printf("你输入的字符串是:%s\n",arr1);

strip(arr1);

    return 0;
}