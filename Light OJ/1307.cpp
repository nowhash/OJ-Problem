#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,cs,x;

    cin>>test;

    for(cs=1; cs<=test; cs++)
    {
        vector <int> vec;
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end());

        int ans=0,sum=0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int sum=vec[i]+vec[j];

                int pos=lower_bound(vec.begin(),vec.end(),sum)-vec.begin();

                ans+=pos-j-1;
            }
        }

        printf("Case %d: %d\n",cs,ans);
    }
    return 0;
}
