#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
int low , high,g,r ;
  

 nikhil: printf(" enter the lowest and the highest intervals in the correspoding order.....");
  g=scanf("%d %d",&low,&high);
if(g==0)
{getchar();
printf(" invalid input.........");
goto nikhil;
}

 if(low<0 && high<0)
{
   printf("invalid output.........");
   goto nikhil;
}
if(low>high)
{
r=high;
high=low;
low=r;
printf(" invalid input.........");
goto nikhil;
}

   int flag=1;
     
          for (int i=low; i<=high; i++)
           {

                   for(int j=2;j<=(i/2);j++)
                     {
                         if(i%j==0)
                          flag=0;
                     }
      if(flag==1)
      printf("    %d", i);
       flag=1;
           }
return 0;

   

}
