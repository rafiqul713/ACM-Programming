#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,string>m;
    string s1,s2,s3;
    int i,a,b;
    cin>>a;
    cin.ignore();
    for(i=0;i<a;i++)
    {
        getline(cin,s1);
        getline(cin,s2);
        m[s1]= s2;
    }
    cin>>b;
    getline(cin,s3);
    for(i=0;i<b;i++)
    {
        getline(cin,s3);
        cout<<m[s3]<<endl;
    }
}
