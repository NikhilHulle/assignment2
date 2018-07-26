#include<stdio.h>
#include<stdlib.h>
int main()
{

        int a[100],b[100],n,i,j,k=0,w=0,g;

      printf(" enter the number of elements");
           g= scanf("%d",&n);
  if(g==0)
{ printf("invalid input");
  return 0;
}

   for(i=0;i<n;i++)

    {
       printf("enter the elements no %d",i+1);
           scanf("%d",&a[i]);

    }


   printf(" enter the number from the splitting should occur........");
    scanf("%d",&j);

if (j>n)
{
printf("INVALID INDEX");
RETURN 0;
}
if(j>n)
{
printf("INVALID INDEX");
}

for (int h=j-1;h<n;h++)
{

     b[k]=a[h];
     a[h]=a[w];
     a[w]=b[k];
      k++;
      w++;
}
