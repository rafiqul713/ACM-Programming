#include<iostream>
using namespace std;
int main()
{
    string s;
    int i;
    for(i=1; ; i++)
    {
          cin>>s;
        if(s=="#") break;
        cout<<"Case "<<i<<": ";
        if(s=="HELLO")   cout<<"ENGLISH";
        else if(s=="HOLA")    cout<<"SPANISH";
        else if(s=="HALLO")   cout<<"GERMAN";
        else if(s=="BONJOUR") cout<<"FRENCH";
        else if(s=="CIAO")    cout<<"ITALIAN";
        else if(s=="ZDRAVSTVUJTE")  cout<<"RUSSIAN";
        else cout<<"UNKNOWN";
        cout<<endl;

    }
    return 0;
}
