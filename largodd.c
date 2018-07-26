#include<stdio.h>

int main()
{
int a[100],n,y,largest=0;

       printf("enter the number of elements");

       scanf("%d",&n);
                        
       for(int i =0;i<n;i++)
       {
           printf("enter the %d'th element",i+1);

          scanf("%d",&a[i]);
       }

       for(int j=0;j<n;j++)
        {
           if(a[j]%2!=0)
             {
               if(a[j]>largest)

                  largest=a[j];

                 }
           }
printf(" the largest odd number is %d",largest );

}

