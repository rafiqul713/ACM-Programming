#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,c,d,L,x,function,count;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&L)==5)
    {
        if(a==0 && b==0 && c==0 && d==0 && L==0)
            break;
        else
        {
            count=0;
            for(x=0;x<=L;x++)
            {
                function= (a*x*x)+ (b*x)+c;
                if(function%d==0)
                    count++;
            }
            printf("%d\n",count);
        }
    }
}
