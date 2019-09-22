#include<stdio.h>
int main()
{
int i,j,m,max=0,min=0,temp=0,a[10];
scanf("%d",a[10]);
scanf("%d",&m);
for(i=0;i<min;i++)
{
for(j=i+1;j<min;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<min;i++)
printf("%d",a[i]);
printf("\n");
printf("%d",a[m-1]);
return 0;

}
