#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
int fact=1,g;
int x;
 nikhil:  printf(" enter a valid number whose factorial can be found");
          g=scanf("%d",&x);
if(g==0)
{getchar();
printf(" invalid input....");
goto nikhil;
}
          if(x<0)
           {printf(" invalid input......");
            printf(" ");
            goto nikhil;
           }
       
           for (int i=x; i>0; i--)
           
             fact= fact* i;
           
           printf(" the factorial of the entered number is %d", fact);


}
