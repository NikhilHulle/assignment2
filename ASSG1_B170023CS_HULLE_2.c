//THE ELEMENT AT REQUIRED POSITION IS PRINTED 

#include<stdio.h>

int main()
{
int a[100],k,n,g;

printf("enter the number of elements");

g= scanf("%d",&n);


    if( g==0 || n<0)
       {  printf("entered input is invalid");                                                                  // THE INPUT ENTERED IS CHECKED
          return 0;}

for(int i=0;i<n;i++)
{
printf("enter the %d element",i+1);

scanf("%d",&a[i]);
}

printf("enter the location of the desired element");
scanf("%d",&k);

if(k>n)
{ printf("entered input is invalid");
return 0;
}

printf(" the element at that position is %d",a[k-1]);                                                           // PRINTS THE REQUIRED ELEMENT


for (int u=k-1;u<n-1;u++)
      {
        a[u]=a[u+1];
      }


printf("the resultant array is ");

for(int p=0;p<n-1;p++)
{

printf("%d,",a[p]);
}
return 0;
}
      
