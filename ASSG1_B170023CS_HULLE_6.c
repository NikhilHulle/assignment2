#include<stdio.h>
int main()
{
int a[100],i,j,k,n,flag=1,g;

printf("enter the number of elements");

g=scanf("%d",&n);


    if( g==0 || n<0)
       {  printf("entered input is invalid");
          return 0;}

for(i=0;i<n;i++)
{
printf("enter the element number %d  ",i+1);
scanf("%d",&a[i]);
}

printf(" enter the number to be replaced");
scanf("%d",&j);

printf("enter the new number to be put");
scanf("%d",&k);

for(int x=0;x<n;x++)
{
if(j==0)
flag=0;
}

if(flag==1)
{ printf(" entered input not found");
return 0;
}


for(int l=0;l<n;l++)
{

if(j==a[l])
{
a[l]=k;

}
}


printf(" the resultant array is ");


for(int y=0;y<n;y++)
{

printf("%d,",a[y]);
}

return 0;
}




