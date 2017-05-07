#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
int main()
{
    int T,i;
    double d, v,u,a,t,t1,t2;
    cin>> T;
    for(i=1; i<=T; i++)
    {
        cin>> d>> v>>u;
        if((v>=u) || (v<=0)|| (u<=0)|| (d<=0))
        {
            printf("Case %d: can't determine\n",i);
        }
        else
        {
            a= sqrt(u*u-v*v);
            t1= d/a;
            t2= d/u;
            t= t1-t2;
            printf("Case %d: %.3lf\n",i,t);
        }


    }
}

