#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
   int t, c, i, j, len, sqrNum;
   char str[];

   scanf("%d", &t);
   getchar();
   for (c = 1; c <= t; c++)
   {

      //fgets(str,100000,stdin);
      gets(str);
      len = strlen(str);
      sqrNum = sqrt(len);

      if (sqrNum * sqrNum == len)
      {
         for (i = 0; i < sqrNum; i++)
         {
            for (j = i; j<len; j = j + sqrNum)
               printf("%c", str[j]);
         }
         printf("\n");
      }
      else
      {
         printf("INVALID\n");
      }
   }

   return 0;
}
