#include <stdio.h>

int main()
{
   long int n;
   while(scanf("%ld",&n)==1)
   {
      if(n>=0)
      {
         printf("%ld\n",((n*n+n+2)/2));
      }
      else
         break;
   }
   return 0;
}