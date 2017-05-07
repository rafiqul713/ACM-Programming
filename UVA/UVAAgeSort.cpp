#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;
long long int a[10000000];
int main()
{
    long long int t,i,n;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
        {
            break;
        }
        for(i=0;i<n;i++)
        {

            scanf("%lld",&a[i]);
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
       {
        cout<< a[i];
        if(i<n-1)
            printf(" ");

       }
       printf("\n");
    }

    return 0;

}
