#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int n,i,j,x,y,l;

    while(cin>>n)
    {
        if(n==0)
            break;

        cin>>str;

        l=str.length();

        x=l/n;
        y=x;

        for(i=0; i<l; i=i+x)
        {
            for(j=y-1; j>=i; j--)
            {
                cout<<str[j];
            }
            y+=x;
        }
        cout<<endl;
    }
    return 0;
}
