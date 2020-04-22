#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t,n=0;
   string str;
   cin>>t;

   while(t--)
   {
      cin>>str;

      switch(str[1])
      {
      case '+':
         n++;
         break;
      case '-':
         n--;
         break;
      }
   }

   cout<<n<<endl;

   return 0;
}
