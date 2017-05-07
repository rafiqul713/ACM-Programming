#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int T, ant,pos,len,earliest,least,i,j;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>len>>ant;
        earliest=0;
        least=0;
        for(j=0;j<ant;j++)
        {
            cin>>pos;
            earliest=  max(earliest,min(pos,len-pos));
            least= max(least,max(pos,len-pos));

        }
        cout<<earliest<<" "<<least<<endl;
    }
}
