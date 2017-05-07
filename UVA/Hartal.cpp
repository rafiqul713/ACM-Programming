#include<iostream>
#include<cstdio>
using namespace std;
int main()
{

    int T;
    cin>>T;
    while(T--)
    {
    int N,P;
    bool damage=false;
    int day=0;
    int party[10000];
    cin>>N;
    cin>>P;
    for(int i=0;i<P;i++)
    {
        cin>>party[i];

    }

    for(int i=1;i<=N;i++)
    {
        damage=false;
        if(i%7==6 || i%7==0)
            continue;
        else
        {
            for(int j=0;j<P;j++)
            {
                if(i%party[j]==0)
                    {
                        damage=true;
                    }
            }

        }
        if(damage==true)
            {
                day++;

            }



    }

    cout<<day<<endl;
}
return 0;
}
