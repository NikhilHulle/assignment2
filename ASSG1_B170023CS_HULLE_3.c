#include<stdio.h>
int main()
{
int a[100],x,y,largest=0;
printf("enter the number of elements");

scanf("%d",&x);

for(int i=0;i<x;i++)
{
printf("enter the %d elements",i+1);
scanf("%d",&a[i]);
}

for(int j=0;j<x;j++)
{

if(a[j]%2!=0)
{
if(a[j]>largest)
largest=a[j];
}
}
printf(" the largest odd number is %d",largest);
}
