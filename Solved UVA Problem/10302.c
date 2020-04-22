#include <stdio.h>
#include <math.h>

int main()
{
   long long int n, calc, sum;

   while ((scanf("%lld", &n)) != EOF)
   {
      calc = (n * (n + 1) / 2)*(n * (n + 1) / 2);

      printf("%lld\n", calc);
   }

   return 0;
}