#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,cig,rem,t,cig1,rem1,s,flag;

    freopen("input.txt","r",stdin);

    while((scanf("%d %d",&n,&k)) !=EOF)
    {
        flag=0;
        s=0;
        cig=n/k;
        rem=n%k;
        t=cig+rem;

        while(t>=k)
        {
            flag=1;
            cig1=t/k;
            rem1=t%k;
            t=cig1+rem1;
            s=s+cig1;
        }
        if(flag==1)
            cout<<n+cig+s<<endl;
        else
            cout<<n+cig<<endl;
    }

    return 0;
}
