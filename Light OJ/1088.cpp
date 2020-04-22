#include <bits/stdc++.h>
using namespace std;



int main()
{
    int test,cs,i,n,q,a,b,x;

    scanf("%d",&test);
    for(cs=1; cs<=test; cs++)
    {
        vector <int> vec;
        scanf("%d %d",&n,&q);

        for(i=0; i<n; i++)
        {
            scanf("%d",&x);
            vec.push_back(x);
        }

        printf("Case %d:\n",cs);
        while(q--)
        {
            scanf("%d %d",&a,&b);

            int pos1=upper_bound(vec.begin(),vec.end(),b)-vec.begin();
            int pos2=lower_bound(vec.begin(),vec.end(),a)-vec.begin();

            printf("%d\n",pos1-pos2);
        }
    }

    return 0;
}
