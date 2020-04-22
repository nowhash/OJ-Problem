#include <stdio.h>
#include <math.h>

int main()
{
   long long int n,i=0,CnGons;
   double nGons;

   while(scanf("%lld",&n))
   {
      if(n==0)
         break;
      i++;
      nGons=(sqrt((8*n+9))+3)/2;

      CnGons=ceil(nGons);

      printf("Case %lld: %lld\n",i,CnGons);

   }

   return 0;
}