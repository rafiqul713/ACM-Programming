#include<iostream>
#include<cstdio>
#include<cmath>
#define PI acos(-1)
using namespace std;
int main()
{
    double x1,y1,x2,y2,x3,y3;
    double A,B,C,d,area,s,r,circumference;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
    {
        A = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        B=  sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
        C=  sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));

        s= (A+B+C)/2;
        area = sqrt(s*(s-A)* (s-B)* (s-C));
        d= (A*B*C)/ (2*area);
        r = d/2;
        circumference = 2*PI*r;
        printf("%0.2lf\n",circumference);
    }

}
