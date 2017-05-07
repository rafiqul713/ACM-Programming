#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double h,u,d,f;
    while(cin>>h>>u>>d>>f && h)
    {
        f=f*u/100;
        double ht=0.0;
        int day=0;
        while(1)
        {
            day++;
            if(u>0) ht+=u;
            u-=f;

            if(ht>h) break;
            ht-=d;
            if(ht<0) break;

        }
        if(ht>=0)
        cout<<"success on day "<<day<<endl;
        else
        cout<<"failure on day "<<day<<endl;
    }
    return 0;

}
