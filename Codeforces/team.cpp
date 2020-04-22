#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,v,t,count=0;

    cin>>n;

    while(n--)
    {
        cin>>p>>v>>t;

        if(p==1 && v==1 && t==1)
            count++;
        else if(p==1 && v==1)
            count++;
        else if(p==1 && t==1)
            count++;
        else if(v==1 && t==1)
            count++;
    }
    cout<<count<<endl;

    return 0;
}
