#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
int main()
{
    int T,N;
    string str;
    int donate,report,sum,CASE;
    CASE=0;
    cin>>T;
    while(T--)
    {
        CASE++;
        printf("Case %d:\n",CASE);

        cin>>N;
        sum=0;
        for(int i=0;i<N;i++)
        {
            cin>>str;
            if(str=="donate")
            {
                cin>>donate;
                sum= sum+donate;
            }
            else if(str=="report")
            {

                cout<<sum<<endl;
            }
            else
            {
                continue;
            }
        }
    }
    return 0;

}
