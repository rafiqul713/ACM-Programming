#include<iostream>
using namespace std;
int main ()
{
    int t , N , K , P , pos;

    cin>>t;

    for(int i = 1 ; i<=t ; i++)
    {
        cin>>N>>K>>P;
        pos = K + P;
        while(pos > N)
        {
         pos= pos- N;
        }
        cout<<"Case "<<i<<": "<<pos<<endl;
    }
            return 0;
    }
