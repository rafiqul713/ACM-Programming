#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,a,b,c,i,mid;
    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            if((a>b && b>c) || (a<b && b<c))
                mid=b;
            if((b>a && a>c) || (b<a && a<c))
                mid=a;
            if((a>c && c>b) || (a<c && c<b))
                mid=c;
            printf("Case %d: %d\n",i,mid);
        }
    }
}
