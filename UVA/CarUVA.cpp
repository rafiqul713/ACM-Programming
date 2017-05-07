#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    double u,v,t,s,a,i,j,jack1,jack2;
    int Case,c=1;
    while(scanf("%d",&Case)==1)
    {
        if(Case==0)
            break;

        if(Case==1)
        {
            scanf("%lf %lf %lf",&u,&v,&t);
            a=(v-u)/t;
            s=(u*t)+0.5*a*(t*t);
            printf("Case %d: %0.3lf %0.3lf\n",c,s,a);
        }
        else if(Case==2)
        {
            scanf("%lf %lf %lf",&u,&v,&a);
            t= (v-u)/a;
            s= (u*t)+0.5*a*(t*t);
            printf("Case %d: %0.3lf %0.3lf\n",c,s,t);
        }

        else if(Case==3)
        {
            scanf("%lf %lf %lf",&u,&a,&s);
            v= sqrt((u*u)+2*a*s);
            t= (v-u)/a;
            printf("Case %d: %0.3lf %0.3lf\n",c,v,t);
        }

        else if(Case==4)
        {
            scanf("%lf %lf %lf",&v,&a,&s);
            u= sqrt((v*v)-2*a*s);
            t= (v-u)/a;
            printf("Case %d: %0.3lf %0.3lf\n",c,u,t);
        }
        c++;
    }
}
