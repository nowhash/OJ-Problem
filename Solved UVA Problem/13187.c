#include <stdio.h>

int main()
{
   long long int t,s,n,i;

   scanf("%lld",&t);

   for(i=1; i<=t; i++)
   {
      scanf("%lld",&s);

      n=s*(s+2);

      printf("%lld\n",n);
   }

   return 0;
}