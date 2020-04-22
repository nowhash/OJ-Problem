#include <stdio.h>

int main()
{
   int t,n,i,j,temp,captain;

   scanf("%d",&t);
   for(i=1; i<=t; i++)
   {
      scanf("%d",&n);
      int teamMember[n];

      for(j=0; j<n; j++)
      {
         scanf("%d",&teamMember[j]);
      }
      
      captain=n/2;

      printf("Case %d: %d\n",i,teamMember[captain]);
   }

   return 0;
}