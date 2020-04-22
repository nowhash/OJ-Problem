#include <stdio.h>

int main()
{
   int n, i, j, p, q, t, train[51], count, temp;

   scanf("%d", &t);
   for (p = 1; p <= t; p++)
   {
      count = 0;
      scanf("%d", &n);

      for (q = 0; q < n; q++)
         scanf("%d", &train[q]);

      for (i = 0; i < n - 1; i++)
         for (j = 0; j < n - i - 1; j++)
            if (train[j] > train[j + 1])
            {
               count++;
               temp = train[j];
               train[j] = train[j + 1];
               train[j + 1] = temp;
            }

      printf("Optimal train swapping takes %d swaps.\n",count);
   }
}