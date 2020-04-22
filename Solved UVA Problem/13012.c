#include <stdio.h>

int main()
{
   int tea,flavour[5],count,i;

   while(scanf("%d",&tea)==1)
   {
      count=0; 

      for(i=0; i<5; i++)
         scanf("%d",&flavour[i]);

      for(i=0; i<5; i++)
      {
         if(flavour[i]==tea)
            count++;
      }

      printf("%d\n",count);
   }

   return 0;
}