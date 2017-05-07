#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long  N,rev,rem, original,counter;
    int t,i;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%lld",&N);
        original= N;
        counter=0;
        while(1)
    {
            rev=0;
        while(N!=0)
            {
                rem = N%10;
                rev= rev*10 + rem;
                N = N/10;
            }
        if(rev==original)
        break;
        else
        {
        N = rev + original;
        original = rev+original;
         counter++;
        }

     }
    printf("%lld %lld\n", counter, original);
        }
    }

   return 0;
}
