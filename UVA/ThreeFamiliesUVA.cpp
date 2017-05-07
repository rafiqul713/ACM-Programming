#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    double t, h1,h2,h3,h4,payment,payment2,payment3,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>h1>>h2>>payment;
        h3=h1+h2;
        payment2= payment/h3;
        h4 = (h1-h2);
        payment3= payment2*(h1+h4);
        cout<< payment3<< endl;
    }
}
