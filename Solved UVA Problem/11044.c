#include <stdio.h>

int main()
{
   int n, m, t, i;

   scanf("%d", &t);
   for (i = 1; i <= t; i++)
   {
      scanf("%d %d", &m, &n);

      printf("%d\n", ((m / 3) * (n / 3)));
   }

   return 0;
}