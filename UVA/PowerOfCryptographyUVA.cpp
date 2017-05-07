/// result =  pow(p,1/n)

///http://www.mathsisfun.com/algebra/exponent-fractional.html

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
double n,p,result;
while(scanf("%lf %lf",&n,&p)!=EOF){
    result= pow(p,1/n);
    printf("%0.0lf\n",result);
}
}

