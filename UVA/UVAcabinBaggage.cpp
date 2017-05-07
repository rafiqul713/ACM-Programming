#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t, i;
    double length, width, depth, weight;
    int count=0;
    scanf("%d",&t);
    for(i=1; i<=t;i++)
    {
    scanf("%lf %lf %lf %lf",&length,&width,&depth,&weight);
    if(((length<=56.00 && width<=45.00 && depth<=25.00) || (length+width+depth)<=125) && weight<=7.00)
    {
        count++;
        printf("1\n");
    }
    else
        printf("0\n");
    }
    printf("%d\n",count);
}
