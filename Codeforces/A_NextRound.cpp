#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,contestant[100],count;
    count=0;

    cin>>n>>k;

    for(int i=0; i<n; i++)
    {
        cin>>contestant[i];
    }

    for(int i=0; i<n; i++)
    {
      if(contestant[i] !=0){
        if(contestant[i]>=contestant[k-1])
          count++;
      }

    }

    cout<<count<<endl;
}
