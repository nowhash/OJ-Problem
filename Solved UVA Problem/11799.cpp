#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   int t,i,n,j,min;

   cin>>t;

   for(i=1; i<=t; i++)
   {
      cin>>n;

      int creatures[n];

      for(j=0; j<n; j++)
         cin>>creatures[j];

      min=max_element(creatures, creatures+n) - creatures;

      cout<<"Case "<<i<<": "<<creatures[min]<<endl;
   }

   return 0;
}