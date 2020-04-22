//11530

#include<stdio.h>
#include<string.h>

int main()
{
   char str[100];

   int testCase, length, i, j,count;

   scanf("%lld", &testCase);
   getchar();

   for (i = 1; i <= testCase; i++)
   {
      gets(str);

      length = strlen(str);

      count = 0;

      for (j = 0; j < length; j++)
      {
         if(str[j]=='a' || str[j]=='d' || str[j]=='g' || str[j]=='j' ||str[j]=='m' || str[j]=='p' || str[j]=='t' || str[j]=='w' || str[j]==' ')
         {
            count += 1;
         }

         else if(str[j]=='b' || str[j]=='e' || str[j]=='h' || str[j]=='k' ||str[j]=='n' || str[j]=='q' || str[j]=='u' || str[j]=='x')
         {
            count += 2;
         }

         else if(str[j]=='c' || str[j]=='f' || str[j]=='i' || str[j]=='l' ||str[j]=='o' || str[j]=='r' || str[j]=='v' || str[j]=='y')
         {
            count += 3;
         }
         else if (str[j] == 's' || str[j] == 'z')
         {
            count += 4;
         }
      }
      printf("Case #%lld: %lld\n", i, count);
   }
   return 0;
}