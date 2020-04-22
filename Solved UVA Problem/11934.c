#include <stdio.h>

int main()
{
   long long int a, b, c, d, l, i, count, fnValue;

   while (scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &l) == 5)
   {
      count = 0;

      if (a == 0 && b == 0 && c == 0 && d == 0 && l == 0)
         break;

      for (i = 0; i <= l; i++)
      {
         fnValue = a * (i * i) + b * i + c;
         if (fnValue % d == 0)
            count++;
      }

      printf("%lld\n", count);
   }

   return 0;
}