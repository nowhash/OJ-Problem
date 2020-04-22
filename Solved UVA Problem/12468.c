#include <stdio.h>

int main()
{
   int t, i, a, b, forward, backward;

   do
   {
      scanf("%d %d", &a, &b);

      if(a<0 && b<0)
         break;

      if (a > b)
         forward = a - b;
      else
         forward = b - a;

      if (a > b)
         backward = (100 - a) + b;
      else
         backward = (100 - b) + a;

      if (forward < backward)
         printf("%d\n", forward);
      else
         printf("%d\n", backward);

   } while (a>=0 && b>=0);

   return 0;
}