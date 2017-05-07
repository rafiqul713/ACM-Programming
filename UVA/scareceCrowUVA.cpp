#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char arr[200];
    int N,len,i,j,T,s;
    cin>>T;
    for(int k=1;k<=T;k++)
    {
        cin>>N;
        s=0;
        cin.ignore();
        for(i=0;i<N;i++)
        scanf("%c",&arr[i]);
        for(i=0;i<N;)
        {
            if(arr[i]=='.')
            {

            i=i+3;

                s++;
            }

            else
            {
                i++;
            }
        }

        printf("Case %d: %d\n",k,s);

    }
}
