#include <stdio.h>

int main()
{
   long long int num, rem, base, ternary;

   while (scanf("%lld", &num) == 1)
   {
      if (num < 0)
         break;
      base = 1;
      ternary = 0;

      while (num > 0)
      {
         rem = num % 3;
         ternary = ternary + rem * base;
         num /= 3;
         base = base * 10;
      }
      printf("%lld\n", ternary);
   }

   return 0;
}