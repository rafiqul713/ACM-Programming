#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    string s;
    int i=1;
    while(cin>>s)
    {
        if(s=="*")
        break;
        if(s=="Hajj")
        cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
        else if(s=="Umrah")
        cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
        i++;

    }
}
