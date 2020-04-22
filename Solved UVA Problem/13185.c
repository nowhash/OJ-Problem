#include <stdio.h>

int main()
{
   long long int t,num,sum,i,j,k;

   scanf("%lld",&t);
   for(i=1; i<=t; i++)
   {
      sum=0;

      scanf("%lld",&num);

      for(j=1; j<=num; j++)
      {
         if(num%j==0 && j!=num)
            sum=sum+j;
      }

      if(sum==num)
            printf("perfect\n");
      else if(sum<num)
            printf("deficient\n");
      else 
            printf("abundant\n");
   }
   
   return 0;
}