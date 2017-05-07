#include<iostream>
#include<cstdio>
#include<cmath>
#define PI  2*acos (0.0)
using namespace std;

int main(){
double r,d,c_area, s_area, shaded_area;
int T,i;
cin>>T;
for(i=1;i<=T;i++){
    cin>>r; // radius of a circle
    d= 2*r; // diameter of a circle
    c_area= PI*(r*r); // area of a circle
    s_area= d*d;
    shaded_area= s_area-c_area;
    printf("Case %d: %0.2lf\n",i,shaded_area);
}
}
