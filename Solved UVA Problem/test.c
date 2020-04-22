#include<stdio.h>

int main()
{
    int n,i,t,j;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        for(j=n; j>1; j--)
        {
            printf("2^%d + ",j);
        }
        printf("2 + 1\n");
    }
    return 0;
}
