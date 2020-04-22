#include <stdio.h>
#include <string.h>

int ass_val_alp(char str[])
{
   int sum = 0, len, i;
   len = strlen(str);
   for (i = 0; i < len; i++)
   {
      if (str[i] >= 'A' && str[i] <= 'Z')
      {
         sum += str[i] - 64;
      }
      else if (str[i] >= 'a' && str[i] <= 'z')
      {
         sum += str[i] - 96;
      }
   }
   return sum;
}

int split_int_sum(int num)
{
   int sum = 0, rem;

   if (num > 9)
   {
      while (num > 9)
      {
         sum = 0;
         while (num > 0)
         {
            rem = num % 10;
            sum = sum + rem;
            num /= 10;
         }
         num = sum;
      }
   }
   else
   {
      return num;
   }

   return sum;
}

int main()
{
   char name1[25], name2[25];
   int sumOfAlp1, sumOfAlp2;
   float sum1, sum2, ratio;

   while (gets(name1))
   {
      gets(name2);
      sumOfAlp1 = ass_val_alp(name1);
      sumOfAlp2 = ass_val_alp(name2);

      sum1 = split_int_sum(sumOfAlp1);
      sum2 = split_int_sum(sumOfAlp2);

            if(sum1>sum2)
      {
            ratio=sum2*100/sum1;
      }
      else
      {
            ratio=sum1*100/sum2;
      }

      printf("%.2f %\n",ratio);

   }
   return 0;
}
