#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
   int i,g;
   double result=0;

    nikhil: printf(" enter the number of terms to be summed");
   g=scanf("%d",&i);
if(g==0)
{getchar();
printf(" invalid input.......");
goto nikhil;
}

 if(i<0)
{
   printf("invalid output........");
   goto nikhil;
}

for ( double k=1; k<=i; k++)
    {
        result=result+(1/k);
     }

   printf("the sum is %0.15f ",result);

}


