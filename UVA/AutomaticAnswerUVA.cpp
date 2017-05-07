#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long t,n,A,B,C,D,E,jack,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        A= (n*567)/9;
        B= (A+7492)*235;
        C= B/47;
        D= C-498;
        E= (D/10);
        jack= (E%10);
        jack=abs(jack);
        cout<<jack<<endl;


    }
}
