#include <stdio.h>

int main()
{
   long long int n, i, x, y, sum, difference;

   scanf("%lld", &n);
   for (i = 1; i <= n; i++)
   {
      scanf("%lld %lld", &sum, &difference);
      if (sum >= difference && (sum + difference) % 2 == 0)
      {
         x = (sum + difference) / 2;
         y = sum - x;

         printf("%lld %lld\n", x, y);
      }
      else
      {
         printf("impossible\n");
      }
   }
   return 0;
}