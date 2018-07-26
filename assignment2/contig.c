nclude<stdio.h>

int main()

{

        int a[100][100],i,j,k=0,b[100],sum=0,begin=0,end=0,m,n,r,largest,g;

      printf("enter the number of elements    ");

      g=scanf("%d",&n);


    if( g==0 || n<0)
       {  printf("entered input is invalid\n");                                           //CHECKS WHETHER THE ENTERED INPUT IS CORRECT
          return 0;}

    for ( j=0;j<n;j++)
      {
        printf("enter the element number %d      ",j+1);                                  //READS THE ENTERED INPUT ARRAY
        scanf("%d", &b[j]);
      }

largest=b[0];
      for( i=0;i<n;i++)
     {

        for(j=i;j<n;j++)
           {  
              sum+=b[j];
                a[i][k]=sum;
              if(a[i][k]>largest)                                                         // FINDS THE LARGEST SUM AND THE SUBARRAY BEGINNING AND ENDING LOCATION
       {
                largest=a[i][k];
                begin=i;
                end=k+i; 
          
       }
k++;
     
}
    sum=0;k=0;
}


printf(" the maximum sum is %d\n",largest);

printf(" the subarray index begins at %d and ends at %d", begin,end);                       // PRINTS THE REQUIRED OUTPUT

return 0;

   
