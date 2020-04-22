#include <stdio.h>
#include <math.h>

int main()
{
   long long int x, y;
   int t, i;
   scanf("%d", &t);

   printf("\n");

   for (i = 0; i < t; i++)
   {
      scanf("%lld",&y);
      x=sqrt(y);
      printf("%lld\n",x);
   }
   return 0;
}