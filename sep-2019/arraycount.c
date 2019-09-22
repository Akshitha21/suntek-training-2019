#include<stdio.h>
int countval(int*a,int n,int ele)
{
int i,count=0;
for(i=0;i<n;i++)
{
if(a[i]==ele)
{
count++;
}
}
if(count!=0)
return count;
else
return -1;
}
int main()
{
int i,n,a[100],ele,count;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&ele);
count=countval(a,n,ele)
printf("%d",count);
return 0;
}
