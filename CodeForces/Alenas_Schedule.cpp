#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n;
    int count=0;
    int arr[10000];
    memset(arr,0,sizeof(arr));
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n-1;i++)
    {
        if(arr[i-1]==1 && arr[i]==0 && arr[i+1]==1)
        {
            arr[i]=1;
        }
        else
        {
            continue;
        }
    }
    for(int i=0;i<n;i++)
    {
        count=count+arr[i];

    }
    cout<<count<<endl;

}
