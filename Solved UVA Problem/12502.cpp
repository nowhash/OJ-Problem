#include <bits/stdc++.h>
using namespace std;

int main()
{
   int x,y,z,t,f;

   ifstream cin("input.txt");


   cin>>t;

   while(t--)
   {
      cin>>x>>y>>z;

      f=(z*(x+(x-y))/(x+y));

      cout<<f<<endl;
   }
   return 0;
}
