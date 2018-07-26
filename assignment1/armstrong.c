#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{

       int i,sum=0,m,g;
    nikhil:   printf(" enter the number which has to be checked");
       g=scanf("%d", &i);
if(g==0)
{getchar();
printf(" invalid input........");
goto nikhil;
}
  if(i<0)
  {
     printf(" invalid output.......");
     printf(" ");
    goto nikhil;
}
int k=i;
while(k>0)
{
 m= k%10;
sum= sum+ (m*m*m);
k=k/10;
}
if (sum==i)
printf(" the number is a armstrong number");
else 
printf(" the number is not a armstrong number");

}
