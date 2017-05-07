#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int d1,d2,m1,m2,y1,y2;
    int t,i,Age;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d/%d/%d",&d1,&m1,&y1);
            scanf("%d/%d/%d",&d2,&m2,&y2);
            if(d2>d1)
            {
                d1=d1+30;
                m2=m2+1;

            }
            if(m2>m1)
            {
                m1=m1+12;
                y2=y2+1;
            }
            Age= y1-y2;
            if(Age<0)
            printf("Case #%d: Invalid birth date\n",i);
            else if(Age>130)
                printf("Case #%d: Check birth date\n",i);
            else
                printf("Case #%d: %d\n",i,Age);

        }
    }
}
