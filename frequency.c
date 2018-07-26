//COUNTS THE NUMBER OF TIMES A INTEGER HAS BEEN REPEATED IN THE ARRAY

#include<stdio.h>

int main()

{

int a[100],b[100],count=1,n,i,j,g;

         printf("enter the number of elements");                                            //ENTERED THE INPUT
         g=scanf("%d",&n);


    if( g==0 || n<0)
       {  printf("entered input is invalid");
          return 0;}                                                                         // CHECKING THE INPUT

     for (i=0;i<n;i++)
    {

   printf("enter the %d element",i+1);
   scanf("%d",&a[i]);
    }
        for (int y=0;y<n;y++)
      {
           b[y]=-1;
      }


       for (i=0;i<n;i++)
   { 

          for (j=i+1;j<n;j++)
        {
           if(a[i]==a[j])                                                                      // COUNTS THE FREQUENCY
            {count++;
             b[j]=0;
        }
   }
   if(b[i]!=0)
     b[i]=count;
  count=1;
     
}

printf(" the frequency is as follows\n");

for (int h=0;h<n;h++)

if (b[h]!=0)
{
printf("%d            %d",a[h],b[h]);
printf("\n");
}

return 0;
}
