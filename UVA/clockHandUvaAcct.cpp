#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    double hour, min, hourAngle, minAngle, Angle;
    char ch;
    while(scanf("%lf %c %lf", &hour, &ch, &min))
    {
        if((hour==0) && (min==0))
            break;
        hourAngle= (hour*30)+ 30*(min/60);
        minAngle=  (min*6);
        Angle= hourAngle-minAngle;
        if(Angle<0)
            Angle= abs(Angle);
        if(Angle>180)
            Angle= 360-Angle;
        printf("%0.3f\n", Angle);
    }

}
