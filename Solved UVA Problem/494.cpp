#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int count;

    while(getline(cin,str))
    {
        count=0;

        for(int i=0; str[i]!='\0'; i++)
        {
           cout<<i<<endl;
            if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
            {
                count++;

                while((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
                    i++;
            }
        }

        cout<<count<<endl;
    }
    return 0;
}
