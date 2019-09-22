#include<stdio.h>
int rev(int num)
{
int sum=0,r;
while(num!=0)
{
r=num%10;
sum=sum*10+r;
num=num/10;
}
return sum;
}
int main()
{
int num,rev1;
scanf("%d",&num);
rev1=rev(num);
printf("%d",rev1);
return 0;
}
