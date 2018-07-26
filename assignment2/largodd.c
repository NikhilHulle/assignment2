nclude<stdio.h>
int main()
{
int a[100],x,y,largest,flag=0;
printf("enter the number of elements");

scanf("%d",&x);

for(int i=0;i<x;i++)
{
printf("enter the %d elements",i+1);
scanf("%d",&a[i]);
}
for(int i=0;i<x;x++)
{
if(a[i]%2!=0)
{largest=a[0];
flag=1;
break;
}
}
if(flag==0)
{printf(" there are no odd elements");
return 0;
}

for(int j=0;j<x;j++)
{

if(a[j]%2!=0)
{
if(a[j]>largest)
largest=a[j];
}
}
printf(" the largest odd number is %d",largest);
}
