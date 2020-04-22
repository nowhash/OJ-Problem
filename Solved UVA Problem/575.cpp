#include <bits/stdc++.h>
using namespace std;

int main()
{
   string str;
   long long l,i,SkewDec;

   while(cin>>str && str!="0")
   {
      i=0;
      SkewDec=0;
      l=str.length();

      while(str[i])
      {
         int n=str[i]-48;
         SkewDec+=n*(pow(2,(l-i))-1);

         i++;
      }

      cout<<SkewDec<<endl;
   }
}
