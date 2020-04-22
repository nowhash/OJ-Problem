#include <stdio.h>

int main()
{
   int data[1000], count1, count2, n, i, j = 0;

   while (scanf("%d", &n) == 1)
   {
      if (n == 0)
         break;
      j++;
      count1 = 0;
      count2 = 0;

      for (i = 0; i < n; i++)
      {
         scanf("%d", &data[i]);
      }

      for (i = 0; i < n; i++)
      {
         if (data[i] > 0)
            count1++;
         else
            count2++;
      }
      printf("Case %d: %d\n", j, count1 - count2);
   }

   return 0;
}