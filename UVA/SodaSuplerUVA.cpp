#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int e,f,c;
    int sum, A, mod,t,N;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%d %d %d",&e,&f,&c);
        N=e+f;
        while(N>=c)
        {
            mod= N%c;
            A= N/c;
            sum= sum+A;
            N= A+mod;
        }
        printf("%d\n",sum);
    }
}
