#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int l,rem[100],i,count,binary;

    while(scanf("%lld",&l))
    {
        count =0;

        if(l==0)
            break;


        for(i=0; l>0; i++)
        {
            rem[i]=l%2;

            if(rem[i]==1)
                count++;
            l=l/2;
        }
        printf("The parity of ");
        for(int j=i-1; j>=0; j--)
        {
           cout<<rem[j];
        }

         printf(" is %lld (mod 2).\n",count);

    }

    return 0;
}
