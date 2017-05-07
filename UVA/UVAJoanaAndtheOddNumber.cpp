#include<iostream>
#include<cstdio>
#include<cstdlib>
int main()
{
    long long int n,sum;
    while(scanf("%d",&n)==1)
    {
        sum = (((n*(n+2)/2)*3)-6);

        printf("%lld\n",sum);
    }
    return 0;

}
