#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long int t,n,m;

   cin>>t;

   while(t--)
   {
      cin>>n>>m;

      int x=n/3;
      int y=m/3;

      cout<<x*y<<endl;
   }

   return 0;
}
