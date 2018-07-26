#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
int a , x,y, next,g;

    nikhil: printf(" enter the number");
     g= scanf("%d",&a);
if(g==0)
{getchar();
printf(" invalid input........");
goto nikhil;
}
 if(a<0)
{
   printf("invalid output.......");
   goto nikhil;
}

if( a==0)
{printf(" the fibonacci series is 0");
return 0;
}
x=0;
y=1;
printf(" the fibonacci series is %d %d ",x,y);
for( int i=2;i<a;i++)
{

next= x+y;
printf(" ");
printf("%d",next);
x=y;
y=next;
}

}
