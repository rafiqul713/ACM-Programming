#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,m,n,j;
    char ch[100];
    while((cin>>n)!=0)
    {
        for(i=1; i<=n;i++)
        {
            cin>> m;
            cin>>ch;
            cout<< i<< " ";
            for(j=0; ch[j]!='\0'; j++)
            {
                if(j!=m-1)
                    cout<< ch[j];
                    else
                        continue;

            }
            cout<< endl;
        }
    }

}
