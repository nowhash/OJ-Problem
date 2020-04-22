#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    int t,len;
    cin>>t;

    while(t--)
    {
        cin>>word;
        len=word.length();
        if(len>10)
            printf("%c%d%c\n",word[0],len-2,word[len-1]);
        else
            cout<<word<<endl;

    }
    return 0;
}
