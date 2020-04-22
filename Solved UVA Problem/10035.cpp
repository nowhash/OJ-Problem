#include <bits/stdc++.h>
using namespace std;


int count_carry(string str1,string str2);

int main()
{
    string str1,str2;

    while(cin>>str1>>str2)
    {
        if(str1=="0" && str2=="0")
            break;

        int x=count_carry(str1,str2);

        if(x!=0 && x>1)
            printf("%d carry operations.\n",x);
        else if(x!=0 && x==1)
            printf("%d carry operation.\n",x);
        else
            printf("No carry operation.\n");
    }

    return 0;
}

int count_carry(string str1,string str2)
{
    int len1,len2,x,y,sum,carry,count;

    len1=str1.length();
    len2=str2.length();

    carry=0;
    count=0;

    while(len1!=0 || len2!=0)
    {
        x=0,y=0;
        if(len1>0)
        {
            x=str1[len1-1]-48;
            len1--;
        }

        if(len2>0)
        {
            y=str2[len2-1]-48;
            len2--;
        }

        sum=x+y+carry;

        if(sum>=10)
        {
            count++;
            carry=1;
        }

        else
            carry=0;
    }

    return count;
}

