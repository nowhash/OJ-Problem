#include <stdio.h>

int main()
{
   long long int d1,d2,m1,m2,y1,y2;
   int t,i;
   scanf("%d",&t);
   for(i=1; i<=t; i++)
   {

   scanf("%lld/%lld/%lld",&d1,&m1,&y1);
   scanf("%lld/%lld/%lld",&d2,&m2,&y2);

   if(y1==y2 && d1<d2 || m1<m2)
      printf("Case #%d: Invalid birth date\n",i);
   else if((y1-y2)>130)
      printf("Case #%d: Check birth date\n",i);
   else if(y1-y2<=130)
      printf("Case #%d: %lld\n",i,y1-y2);
   else
      printf("Case #%d: 0",i);
   }
}

