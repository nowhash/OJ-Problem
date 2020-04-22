#include <stdio.h>

int main()
{
  long long int t, n, initial, target, dtarget, sum, i, rem;

   scanf("%lld", &t);

   for (i = 0; i < t; i++)
   {
      sum = 0;

      scanf("%lld %lld %lld", &n, &initial, &target);

      dtarget =abs(target - initial);

      while (dtarget > 0)
      {
         rem = dtarget % 10;
         sum = sum + rem;
         dtarget /= 10;
      }

      printf("%lld\n", sum);
   }

   return 0;
}