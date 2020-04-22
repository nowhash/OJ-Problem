#include <stdio.h>

int main()
{
   long long int num, sum, rem;

   while (scanf("%lld", &num)==1)
   {
      sum = 0;

      while (sum >9)
      {
         sum = 0;

         while (num > 0)
         {
            rem = num % 10;
            sum += rem;
            num = num / 10;
         }
         num = sum;
      }

      printf("%lld\n", sum);
   }
}