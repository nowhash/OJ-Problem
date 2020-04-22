#include <bits/stdc++.h>
using namespace std;

int check_vowel(char ch)
{

   if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y')
         return 1;
   else
         return 0;
}

int main()
{
   string str;
   cin>>str;

   transform(str.begin(),str.end(),str.begin(), ::tolower);

   for(int i=0; i<str.length(); i++)
   {
      if(check_vowel(str[i])==0)
         printf(".%c",str[i]);
   }
   cout<<endl;
   return 0;
}
