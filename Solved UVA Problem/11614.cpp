#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   long long int n,x;

   cin>>t;

   while(t--)
   {
      cin>>n;

      x=(-1+sqrt(1+8*n))/2;

      cout<<x<<endl;

   }
   return 0;
}
