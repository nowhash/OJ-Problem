#include <bits/stdc++.h>
using namespace std;

void sieve(long long int n)
{
    long long int arr[n+1];
    long long int arr2[n+1];
    for(long long int i=1; i<=n; i++)
        arr[i]=1;

    for(long long int i=2; i<=sqrt(n); i++)
    {
        if(arr[i]==1)
        {
            for(int j=2; i*j<=n; j++)
            {
                arr[i*j]=0;
            }
        }
    }

    for(long long int i=2; i<=n; i++)
    {
        if (arr[i]==1)
        {
            for(int j=0; j<n; j++)
                arr2[j]=i;
        }
    }
    
    for(int i=0; i<n; i++)
		cout<<arr2[i]<<" ";
}

int main()
{
    int n=8;
    sieve(n);

}
