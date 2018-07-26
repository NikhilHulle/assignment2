// TO MERGE THE TWO ARRAYS WITHOUT REPEATING ANY ELEMENTS.............


#include<stdio.h>
int main()
{
 
    int a[100],b[100],c[100],m,n,k,h=0,i=0,t=0,g;


    printf("enter the number of elements of the first array");         
    g=scanf("%d",&m);
  
    if( g==0 || m<0)
       {  printf("entered input is invalid\n");                                              //CHECKS WHETHER THE ENTERED INPUT IS CORRECT
          return 0;}

    for ( k=0;k<m;k++)                                             
   {  
       printf("enter the element number %d       ",k+1);                                     // READS THE ENTERED ARRAY.....
         scanf("%d",&a[k]);
   }

   printf("enter the number of elements of the second array");                                   // READS THE ENTERED ARRAY
    scanf("%d",&n);

    for ( k=0;k<n;k++)
   {  
       printf("enter the element number %d     ",k+1);
         scanf("%d",&b[k]);
   }   
            

       while(h<m)
      {                                                                                           // COPIES BOTH THE ENTERED ARRAYS INTO THE THIRD ARRAY
         c[i]=a[h];
         i++;
         h++;
      }

   while(t<n)
    {
       c[i]=b[t];
       i++;
       t++;
    }
   
for(k=0;k<i;k++)
   { 
      for(int u=k+1;u<i;u++)                                                                    // REMOVES THE DUPLICATE ITEMS FROM THE ARRAY

       { 
            if(c[k]==c[u]) 

             {
                for(int y=u;y<i;y++)

                    c[y]=c[y+1];

                     i--;
                  
                     u--;
             }

       }

 }
  

     printf(" the resultant merged array is...\n");                                                     //PRINTS THE RESULTANT ARRAY
      for(k=0;k<i;k++)

      {

           printf("%d,",c[k]);

      }
return 0;
}






