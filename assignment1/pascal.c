#include<stdio.h>
#include<stdlib.h>

long factorial ( long i)
{long o=0;
long fact=1;
if(i==0)
return(1);
else
for (long k=i;k>0;k--)
fact= fact*k;
return (fact);
}


int main()
{
        long i;
        long rows,g ;
        long u;
       nikhil: printf("enter the number of rows required");
        g=scanf("%ld", &rows);
if(g==0)
{getchar();
printf(" invalid input..........");
goto nikhil;
}
      if(rows<0)
   {
    printf(" invalid input........");
    printf(" ");
    goto nikhil;
   }
  for (i=0; i<rows ; i++)
 {  
         for(long j=1; j<(rows-i);j++)
         printf("    ");
  
       for(long f=0;f<=i;f++)

       {u=factorial(i)/(factorial(f)*factorial(i-f));
       printf("%8ld", u);
       }
    printf("\n");
 }
        return 0;
}




