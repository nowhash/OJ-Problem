#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,k,p,t;

   cin>>t;

   for(int i=1; i<=t; i++)
   {
      cin>>n>>k>>p;

      while(p--)
      {
         k++;
         if(k>n)
            k=1;
      }

      printf("Case %d: %d\n",i,k);
   }
   return 0;
}
