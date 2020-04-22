#include <stdio.h>

int main()
{
   int t, data[10], i, j, val, flag;

   scanf("%d", &t);
   for (i = 1; i <= t; i++)
   {
      flag = 0;

      for (j = 0; j < 5; j++)
      {
         scanf("%d", &data[j]);
      }

      val = data[0];

      for (j = 0; j < 5; j++)
      {
         if (data[j] == val)
            flag = 1;
         else
         {
            flag = 2;
            break;
         }
         val = val + 1;
      }

      if (flag == 1)
         printf("Y\n");
      else if (flag == 2)
         printf("N\n");
   }

   return 0;
}