#include<iostream>
#include<cstdio>
using namespace std;

double F_to_C(double F)
{
    double C= (5*(F-32))/9;
    return C;

}


double C_to_F(double C)
{
    double F= ((9*C)/5)+32;
    return F;
}
int main()
{
    double C,d;
    int T;
    int CASE=0;
    cin>>T;
    while(T--)
    {
        cin>>C>>d;
        double res= C_to_F(C)+d;
        res= F_to_C(res);
        printf("Case %d: %0.2lf\n",++CASE,res);

    }

}
