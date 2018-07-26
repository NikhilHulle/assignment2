#include<stdio.h>
int main()

{
int smallest,first, second,a[100],n,i,g;

printf("enter the number of elements ");
g=scanf("%d",&n);

for(int i=0;i<n;i++)
{
printf("enter the element no %d",i+1);
scanf("%d",&a[i]);
}


    if( g==0 || n<0)
       {  printf("entered input is invalid");
          return 0;}

if(n==1)
{ printf(" no smallest or second largest element , only one element present %d",a[0]);
return 0;
}
first = a[0];
second=a[0];
smallest=a[0];

for(i=0;i<n;i++)
{
if(a[i]<smallest)
smallest=a[i];
}

printf("the smallest element is %d \n",smallest);

for(i=0;i<n;i++)
{
if(a[i]>first )
first=a[i];
}

for(i=0;i<n;i++)
{
if(a[i]<first&& a[i]>second)
second=a[i];
}

printf("the second largest number is %d",second);
 
return 0;

}




