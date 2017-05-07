#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    string s,A[10000];
    int T,i,N,pos,indx;

    while(scanf("%d",&T)==1)
    {
        while(T--)
        {

        cin>>N;
        pos=0;
        for(i=1;i<=N;i++)
        {
            cin>>s;
            if(s=="LEFT")
            {
                pos--;
                A[i]=s;
            }
            else if(s=="RIGHT")
            {
                pos++;
                A[i]=s;
            }
            else
            {
                cin>>s;
                cin>>indx;
                if(A[indx]=="LEFT")
                {
                    pos--;
                    A[i]= A[indx];

                }
                else if(A[indx]=="RIGHT")
                {
                    pos++;
                    A[i]=A[indx];
                }
            }
        }
        cout<<pos<<endl;

    }
    }
}
