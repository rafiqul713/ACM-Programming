#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,a,b,i,s,d;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d %d",&a,&b);
            if((a>=b) && ((a+b)%2==0))
            {
                s= (a+b)/2;
                d= (a-b)/2;
                printf("%d %d\n",s,d);
            }
            else
                printf("impossible\n");
        }
    }
}
