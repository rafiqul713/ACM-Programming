#include<iostream>
#include<cstdio>
#include<cmath>
#define PI acos(-1)
using namespace std;
int main()
{
    double R,area;
    int N;
    while(scanf("%lf %d",&R,&N)==2)
    {
        area=0.0;
        area = 0.5*( N*(R*R) * sin(2*(PI/N)));
        printf("%.3lf\n",area);

    }
    return 0;
}
