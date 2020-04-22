#include <stdio.h>

int main()
{
   long long int t, i, sum, num, j,storeNum;

   scanf("%lld", &t);

   for (i = 1; i <= t; i++)
   {

      scanf("%lld", &num);
      storeNum=num;
      sum = 0;

      while (sum != 1 && sum != 4)
      {
         sum = 0;
         while (num > 0)
         {
            j = num % 10;
            sum += (j * j);
            num /= 10;
         }
         num = sum;
      }

      if (sum == 1)
         printf("Case #%lld: %lld is a Happy number.\n",i,storeNum);
      else
         printf("Case #%lld: %lld is an Unhappy number.\n",i,storeNum);
   }
   return 0;
}