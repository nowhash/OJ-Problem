#include <bits/stdc++.h>
using namespace std;

int main()
{
   char str[10],str1[10]="one",str2[10]="two",str3[10]="three";
   int t;

   cin>>t;

   for(int i=1; i<=t; i++)
   {
      int c1=0,c2=0,c3=0;

      cin>>str;

      for(int i=0; str[i]!='\0'; i++)
      {
         if(str[i]==str1[i])
            c1++;
         if(str[i]==str2[i])
            c2++;
         if(str[i]==str3[i])
            c3++;
      }

      if(c1==2 || c1==3)
         cout<<"1\n";
      else if(c2==2 || c2==3)
         cout<<"2\n";
      else if(c3==4 || c3==5)
         cout<<"3\n";
   }
   return 0;
}
