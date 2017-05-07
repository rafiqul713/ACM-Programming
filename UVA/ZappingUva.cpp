#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    while(scanf("%d %d",&a,&b)==2 && a>=0 && b>=0)
    {
        c= abs(a-b);
        if(c>=50)
        c= 100-c;
        printf("%d\n", c);
    }
    return 0;
}
