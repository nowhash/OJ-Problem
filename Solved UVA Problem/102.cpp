#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b[3],g[3],c[3];

    while(scanf("%d %d %d %d %d %d %d %d %d",&b[0],&g[0],&c[0],&b[1],&g[1],&c[1],&b[2],&g[2],&c[2])!=EOF)
    {
        int min=INT_MAX,temp;
        char ans[4];

        //BCG
        temp=b[1]+b[2]+c[0]+c[2]+g[0]+g[1];
        if(temp<min)
        {
            min=temp;
            strcpy(ans,"BCG");
        }


        //BGC
        temp=b[1]+b[2]+g[0]+g[2]+c[0]+c[1];
        if(temp<min)
        {
            min=temp;
            strcpy(ans,"BGC");
        }


        //CBG
        temp=c[1]+c[2]+b[0]+b[2]+g[0]+g[1];
        if(temp<min)
        {
            min=temp;
            strcpy(ans,"CBG");
        }

        //CGB
        temp=c[1]+c[2]+g[0]+g[2]+b[0]+b[1];
        if(temp<min)
        {
            min=temp;
            strcpy(ans,"CGB");
        }

        //GBC
        temp=g[1]+g[2]+b[0]+b[2]+c[0]+c[1];
        if(temp<min)
        {
            min=temp;
            strcpy(ans,"GBC");
        }

        //GCB
        temp=g[1]+g[2]+c[0]+c[2]+b[0]+b[1];
        if(temp<min)
        {
            min=temp;
            strcpy(ans,"GCB");
        }

        printf("%s %d\n",ans,min);
    }

    return 0;
}
