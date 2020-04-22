#include <stdio.h>
#include <math.h>

int main()
{
   int t, n, k, i, j, sum;

   scanf("%d", &t);
   for (i = 1; i <= t; i++)
   {
      sum = 0;
      scanf("%d %d", &n, &k);

      for (j = 1; j <= sqrt(n); j++)
      {
         if (n % j == 0)
         {
            if (n / j == j && j % k != 0)
               sum = sum + j;
            else
               {
                  if(j%k!=0)
                     sum=sum+j;
                  if(n/j%k!=0)
                     sum=sum+n/j;
               }
               
         }
      }

      printf("%d\n", sum);
   }

   return 0;
}
