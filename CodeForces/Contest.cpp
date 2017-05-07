#include<iostream>
#include<cstdio>
using namespace std;

double maximum(double m1, double m2){
if(m1>m2){
    return m1;
}
else {
    return m2;
}
}
double max_calculation(int p, int t){
double m1,m2,m;
m1= ((3*p)/10);
m2= (p-   ((p/250)*t));
m= maximum(m1,m2);
return m;
}
int main(){
int a,b,c,d;
int misya,vasya;
a=0,b=0,c=0,d=0;
cin>>a>>b>>c>>d;
misya= max_calculation(a,c);
vasya= max_calculation(b,d);
if(misya>vasya){
    cout<<"Misha\n";
}
else if(vasya>misya){
    cout<<"Vasya\n";
}
else if(misya==vasya){
    cout<<"Tie\n";
}

}
