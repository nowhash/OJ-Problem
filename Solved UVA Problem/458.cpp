#include <bits/stdc++.h>
using namespace std;

int main()
{
   string str;

   while(cin>>str)
   {
      for(int i=0; str[i]!='\0'; i++)
      {
         printf("%c",str[i]-7);
      }
      cout<<endl;
   }

   return 0;
}
