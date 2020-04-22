#include <bits/stdc++.h>
using namespace std;

int main()
{
   ifstream cin("input.txt");
   int t,f;
   double sFarm,nAnimals,eFr,sum;

   cin>>t;

   while(t--)
   {
      sum=0;
      cin>>f;

      for(int i=1; i<=f; i++)
      {
         cin>>sFarm>>nAnimals>>eFr;

         float x=sFarm/nAnimals;
         float y=x*eFr;
         float k=y*nAnimals;

         sum=sum+k;
      }

      cout<<sum<<endl;
   }

   return 0;
}
