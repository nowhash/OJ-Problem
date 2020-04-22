///11192

#include <stdio.h>
#include <string.h>

int main()
{
      char str[100];
      int i, j, length, groupSize, lo, n;
      
      while (scanf("%lld", &n))
      {    
            if(n==0)
                  break;
            getchar();
            gets(str);

            length = strlen(str);

            groupSize = length / n;

            for (i = 1; i <= n; i++)
            {
                  lo = i * groupSize;

                  for (j = lo - 1; j >= lo - groupSize; j--)
                  {
                        printf("%c", str[j]);
                  }
            }
            printf("\n");
      }

      return 0;
}