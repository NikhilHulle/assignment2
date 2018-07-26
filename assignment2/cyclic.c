nclude<stdio.h>
int main()

{

int a[100],n,i,j,k,g;

printf("enter the number of elements");
g=scanf("%d",&n);


    if( g==0 || n<0)
       {  printf("entered input is invalid");
          return 0;}  

  

for (int j=0;j<n;j++)
{
printf("enter the element number %d",j+1);
scanf("%d", &a[j]);
}
 a[n]=a[0];
for(int g=0;g<n;g++)
{
a[g]=a[g+1];
}



for(int u=0;u<n;u++)
 printf("%d,",a[u]);


return 0;

}
