#include<iostream>
using namespace std;
int main()
{
    int n, i,t, sum,count=0;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        count++;
        sum=0;
        for(i=1; i<=n; i++)
        {
            cin>> t;
            if(t>0)
                sum++;
            else
                sum--;
        }
        cout<< "Case "<<count<<": "<<sum<< endl;

    }
}
