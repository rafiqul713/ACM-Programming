#include<iostream>
#include<cstdio>
using namespace std;
long long int arr[1000000];
int main()
{
    int p,n;
    long long int pos,x,mod;
    bool CONFLICT;
    CONFLICT=false;
    cin>>p>>n;
    for(int i=0;i<n;i++)
    {
        arr[i]= false;
    }
    for(int i=0;i<n;i++)
    {
        cin>>x;
        mod=x%p;
        if(arr[mod]!=true)
        arr[mod]=true;
        else
        {
            CONFLICT=true;
            pos=i+1;
            break;
        }

    }
    if(CONFLICT==true)
    {
        cout<<pos<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }

}
