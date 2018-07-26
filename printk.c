#include<stdio.h>
int main()
{
int a[100],x,y,n;
printf("enter the number of elements");
scanf("%d",&n);

        for (int i=0;i<n;i++)
            {      
               printf("enter the following  elements of the array");
               scanf("%d",&a[i]);
             }

       printf("enter the position of the element");
       scanf("%d",&x);

         printf("element at that location is %d",a[x+1]);

      printf("the resultant array is    ");

for(y=x-1;y<n-1;y++)
{
         a[y]=a[y+1];
       printf("%d",a[y]);
}
}
