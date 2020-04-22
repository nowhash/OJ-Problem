#include <stdio.h>

int main()
{
   int t, n, i, j, flag0, flag1, flag2, flag3, flag4, flag5, flag6, flag7, flag8, flag9;

   scanf("%d", &t);

   for (j = 1; j <= t; j++)
   {
      scanf("%d", &n);

      flag0 = 0;
      flag1 = 0;
      flag2 = 0;
      flag3 = 0;
      flag4 = 0;
      flag5 = 0;
      flag6 = 0;
      flag7 = 0;
      flag8 = 0;
      flag9 = 0;

      for (i = 1; i <= n; i++)
      {
         if (i == 1)
            flag1++;
         else if (i == 2)
            flag2++;
         else if (i == 3)
            flag3++;
         else if (i == 4)
            flag4++;
         else if (i == 5)
            flag5++;
         else if (i == 6)
            flag6++;
         else if (i == 7)
            flag7++;
         else if (i == 8)
            flag8++;
         else if (i == 9)
            flag9++;
         else if (i == 10)
         {
            flag1++;
            flag0++;
         }
         else if (i == 11)
         {
            flag1 = flag1 + 2;
         }
         else if (i == 12)
         {
            flag1++;
            flag2++;
         }
         else if (i == 13)
         {
            flag1++;
            flag3++;
         }
         else if (i == 14)
         {
            flag1++;
            flag4++;
         }
         else if (i == 15)
         {
            flag1++;
            flag5++;
         }
         else if (i == 16)
         {
            flag1++;
            flag6++;
         }
         else if (i == 17)
         {
            flag1++;
            flag7++;
         }

         else if (i == 18)
         {
            flag1++;
            flag8++;
         }

         else if (i == 19)
         {
            flag1++;
            flag9++;
         }

         else if (i == 20)
         {
            flag2++;
            flag0++;
         }
      }

      printf("%d %d %d %d %d %d %d %d %d %d\n", flag0, flag1, flag2, flag3, flag4, flag5, flag6, flag7, flag8, flag9);
   }
   return 0;
}