#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,a=0,b,x,y,sum;
    scanf("%d",&b);
    while(a<b)
    {
        sum=0;
        scanf("%d %d",&x,&y);
        for(i=x;i<=y;i++)
        {
            if(i%2==1)
                sum= sum+i;
        }
        printf("Case %d: %d\n",a+1,sum);
        a++;

    }
}
