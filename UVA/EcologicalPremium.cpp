#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t, s,a,v,f,sum,i,C[10];
    cin>>t;
    while(t--)
    {
        cin>>f;
        {
            sum=0;
            for(i=0;i<f;i++)
            {
                cin>>s>>a>>v;
                C[i]= s*v;
                sum= sum+C[i];
            }
            cout<<sum<<endl;
        }

    }
}
