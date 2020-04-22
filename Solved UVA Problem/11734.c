#include <stdio.h>
#include <string.h>

int main()
{
      int i,j,k,len1,len2,t;
      char team[20],judge[20],temp[20];

      scanf("%d\n",&t);
      for(i=1; i<=t; i++)
      {
            gets(team);
            gets(judge);

            len1=strlen(team);
            len2=strlen(judge);

            if(strcmp(team,judge)==0)
                  printf("Case %d: Yes\n",i);
            else
            {
                  k=0;

                  for(j=0; j<len1; j++)
                  {
                        if((team[j]>='a' && team[j]<='z')|| (team[j]>='A' && team[j]<='Z'))
                        {
                              temp[k]=team[j];
                              k++;
                        }
                  }

                  temp[k]='\0';

                  if(len2==k && strcmp(temp,judge)==0)
                        printf("Case %d: Output Format Error\n",i);
                  else
                        printf("Case %d: Wrong Answer\n",i);

            }
      }

      return 0;
}