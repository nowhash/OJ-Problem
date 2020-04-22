#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,x,y;

    while(scanf("%d",&t))
    {
        if(t==0)
            break;
        else
        {

            cin>>n>>m;
            while(t--)
            {
                cin>>x>>y;

                if(x>n && y>m)
                    cout<<"NE"<<endl;
                else if(x<n && y>m)
                    cout<<"NO"<<endl;
                else if(x<n && y<m)
                    cout<<"SO"<<endl;
                else if(x>n && y<m)
                    cout<<"SE"<<endl;
                else
                    cout<<"divisa"<<endl;
            }
        }
    }

    return 0;
}
