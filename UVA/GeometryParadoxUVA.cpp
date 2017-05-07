#include<iostream>
#include<cstdio>
#include<cmath>
#define PI acos(-1)
using namespace std;
int main()
{
    int N;
    bool flag;
    double t,r1,r2,outer_circle_area,inner_circle_area,difference=0;
    cin>>N;
    while(N--)
    {
        difference=0;
        cin>>r1;
        if(getchar()=='\n')
       {
        t= r1;
      outer_circle_area =  PI* (t/2)*(t/2);
        inner_circle_area  = 2*PI*((t/4)*(t/4));
        difference =  outer_circle_area-inner_circle_area;
         printf("%0.4lf\n",difference);
        }
        else
        {
            cin>>r2;
            outer_circle_area = PI*(r1+r2)*(r1+r2);
            inner_circle_area = (PI*(r1*r1)) + (PI*(r2*r2)) ;
            difference = outer_circle_area-inner_circle_area;

        printf("%0.4lf\n",difference);
            }

        }
}

