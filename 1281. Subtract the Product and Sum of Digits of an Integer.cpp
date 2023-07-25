#include<iostream>
using namespace std;
int main()
{
    int n,sum1=1,sum2=0,sum=0,tem=0;
    scanf("%d",&n);
    while(n!=0)
    {
        tem=n%10;
        sum1=sum1*tem;
        sum2=sum2+tem;
        n=n/10;
    }
    if(sum1<sum2)
    {
        tem=sum1;
        sum1=sum2;
        sum2=tem;
    }
    sum=sum1-sum2;
    cout<<sum;
}
