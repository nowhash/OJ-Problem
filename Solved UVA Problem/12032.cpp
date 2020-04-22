#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int tCase,n,max,t;
    cin>>tCase;

    for(t=1; t<=tCase; t++)
    {
        cin>>n;
        int height[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>height[i];
        }
        max=0;

        for(int i=0; i<n-1; i++)
        {
            int s=abs(height[i]-height[i+1]);
            if(max<s)
                max=s;
        }

        printf("Case %lld: %lld\n",t,max);
    }

    return 0;
}
