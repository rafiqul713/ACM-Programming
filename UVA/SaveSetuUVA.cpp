#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    string s;
    int i,j, current,T, total=0;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>s;
        if(s=="donate")
        {
            cin>> current;
            total= total+current;
        }
        else
        {
            cout<<total<< endl;
        }
    }

}
