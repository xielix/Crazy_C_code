#include<stdio.h>
int main()
{
char s[80];
scanf("%s",s);

int i,j;
for(i=0,j=0;s[i]!='\0';i++)
{
    if(s[i]!='c')
    {
        s[j++]=s[i];
    }
}
s[j]='\0';
printf("%s",s);
  
return 0;
}