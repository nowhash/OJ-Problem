#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,l,i,j,count,cr_count,res[100];
    string str;
    char x;

    cin>>t;

    while(t--)
    {
        count=0;
        cin>>str;

        l=str.length();

        for(i=0; i<l; i++)
        {
           cr_count=1;
            for(j=i+1; j<l; j++)
            {
                if(str[i]!=str[j])
                {
                    break;
                }
                cr_count++;

                if(cr_count>count)
                {
                    count=cr_count;
                    x=str[i];
                }
            }
        }

        cout<<count<<x;
    }
}
