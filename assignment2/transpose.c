nclude<stdio.h>
int main()
{

        int a[100][100],b[100][100],i,j,k,m,n,g;

printf(" enter the values of row and coloumn in the coreesponding given order");

g=scanf("%d %d",&m,&n);


    if( g==0 || m<0||n<0)
       {  printf("entered input is invalid");
          return 0;}

for (i=0;i<m;i++)

    {
       for(j=0;j<n;j++)
          {
           printf("enter the element at the position [%d] [%d]",i+1,j+1);

            scanf("%d",&a[i][j]);
            }
     }


for( i=0;i<m;i++)

      {
          for(j=0;j<n;j++)

         b[j][i]=a[i][j];
     }

for (i=0;i<m;i++)

    {
       for(j=0;j<n;j++)
         printf("%d\t",a[i][j]);
         printf("\n");
   }

         printf("the transpose of the matrix is \n");

for (i=0;i<n;i++)

    {
       for(j=0;j<m;j++)

       printf("%d\t",b[i][j]);
       printf("\n");

