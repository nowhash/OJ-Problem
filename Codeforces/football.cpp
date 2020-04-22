#include <bits/stdc++.h>
using namespace std;

int main()
{
   string str;
   int n=0,len;

   cin>>str;

   len=str.length();

   for(int i=0; i<len-6; i++)
   {
      if (str[i]=='0' && str[i+1]=='0' && str[i+2]=='0' && str[i+3]=='0' && str[i+4]=='0' && str[i+5]=='0' && str[i+6]=='0')
      {
         n=7;
         break;
      }
      if(str[i]=='1' && str[i+1]=='1' && str[i+2]=='1' && str[i+3]=='1' && str[i+4]=='1' && str[i+5]=='1' && str[i+6]=='1')
      {
         n=7;
         break;
      }

   }

   if(n==7)
      cout<<"YES"<<endl;
   else
      cout<<"NO"<<endl;

   return 0;
}
