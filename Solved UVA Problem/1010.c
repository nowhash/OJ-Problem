#include <stdio.h>

int main()
{
   int n,s;

   while(scanf("%d",&n))
   {
      if(n==0)
         break;
      s=n*4;

      if(s%2==0)
         printf("yes\n");
      else
         printf("no\n");
   }
}