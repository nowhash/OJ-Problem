#include <stdio.h>

int main()
{
      int i, j, t, n, marks[1020], sum;
      float average, count;
      scanf("%d", &t);

      for (i = 1; i <= t; i++)
      {
            sum = 0;
            count = 0;

            scanf("%d", &n);

            for (j = 0; j < n; j++)
            {
                  scanf("%d", &marks[j]);
                  sum = sum + marks[j];
            }

            average = sum / n;

            for (j = 0; j < n; j++)
                  if (marks[j] > average)
                        count++;

            printf("%.3f%\n", ((count * 100) / n));
      }
      return 0;
}