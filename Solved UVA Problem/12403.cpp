#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long int money,tMoney=0;
    char str[20];

    cin>>t;

    while(t--)
    {

        cin>>str;

        if(str[0]=='d')
        {
            cin>>money;
            tMoney=tMoney+money;
        }

        else if(str[0]=='r')
            cout<<tMoney<<endl;
    }

    return 0;
}
