#include<stdio.h>
void mul(int num,int n)
{
int i;
for(i=1;i<=n;i++)
{
printf("%d*%d=%d\n",num,i,num*i);
}
}
int main()
{
int num,n;
scanf("%d",&num);
scanf("%d",&n);
mul(num,n);
return 0;
}
