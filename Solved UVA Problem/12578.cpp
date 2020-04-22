#include <bits/stdc++.h>
using namespace std;

#define PI acos(-1)

int main()
{
    int l,t;
    double width,radius,r,c;

    cin>>t;

    while(t--)
    {
        cin>>l;

        width=l*0.6;
        radius=l*0.2;

        c=(PI*radius*radius);
        r=(width*l)-c;

        printf("%.2lf %.2lf\n",c,r);
    }

    return 0;
}

