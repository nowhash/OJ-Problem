#include <stdio.h>

int main()
{
   int n, t, i, j, k, arr[100], lower, higher;

   scanf("%d", &t);
   for (i = 1; i <= t; i++)
   {
      higher=0;
      lower=0;
      scanf("%d", &n);

      for (j = 0; j < n; j++)
      {
         scanf("%d", &arr[j]);
      }

      for(k=0; k<n-1; k++)
      {
         if(arr[k]<arr[k+1])
            higher++;
         else if(arr[k]>arr[k+1])
            lower++;
      }
      printf("Case %d: %d %d\n",i,higher,lower);
   }

   return 0;

}