#include<stdio.h>
int main()
{
    int num1,num2,count,i, cval, maximumCycleLength, temp;
    while(scanf("%lld %lld",&num1,&num2)!=EOF)
    {
        printf("%lld %lld", num1,num2);
        if(num1>num2)
        {
            temp=num1;
            num1=num2;
            num2=temp;
        }
        maximumCycleLength=0;
        for(i=num1; i<=num2; i++)
        {
            cval=i;
            count=1;
            while(cval!=1)
            {
                if(cval%2>0)
                    cval=3*cval+1;
                else
                {
                    cval/=2;
                }
                count++;
            }
            if(count>=maximumCycleLength)
                maximumCycleLength=count;
        }
        printf(" %lld\n",maximumCycleLength);
    }
    return 0;
}
