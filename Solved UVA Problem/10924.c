#include <stdio.h>
#include <string.h>
int main()
{
   int sum, i, len,j,flag, r;
   char a[1000];
   while (gets(a))
   {
      flag=0;
      sum=0;

      len = strlen(a);

      for (i = 0; i < len; i++)
      {
         if (islower(a[i]))
            sum += (a[i] - 96);
         else if (isupper(a[i]))
            sum += (a[i] - 38);
      }

      for(j=2; j<=sum/2; j++)
      {
         if(sum%j==0)
         {
            flag=1;
            break;
         }
      }

      if(flag==0)
         printf("It is a prime word.\n");
      else
         printf("It is not a prime word.\n");

   }
   return 0;
}