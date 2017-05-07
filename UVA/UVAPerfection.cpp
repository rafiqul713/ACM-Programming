#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    int i,j,k,l,n,sum,flag=0;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        if(flag!=1)
            printf("PERFECTION OUTPUT\n");
        flag=1;
        sum=0;
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
                sum= sum+i;
        }

        if(sum==n)
            printf("%5d  PERFECT\n",n);
        else if(sum>n)
            printf("%5d  ABUNDANT\n",n);
            else if(sum<n)
            printf("%5d  DEFICIENT\n",n);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
