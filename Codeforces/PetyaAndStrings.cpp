#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
   string str1,str2;

   cin>>str1>>str2;

   transform(str1.begin(),str1.end(),str1.begin(),::tolower);
   transform(str2.begin(),str2.end(),str2.begin(),::tolower);

   if((str2.compare(str1))<0)
      cout<<'-1'<<endl;
}
