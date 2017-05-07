#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char arr[100];
    int t,i,n=0;
    int A,B,W,T, Case=1;
    scanf("%d",&t);
    while(t--)
    {

        A=0,B=0,W=0,T=0;
        scanf("%d",&n);
        scanf("%s",arr);
        for(i=0;i<n;i++)
        {
            if(arr[i]=='A')
                A++;
            if(arr[i]=='B')
                B++;
                if(arr[i]=='T')
                    T++;
            if(arr[i]=='W')
                W++;
        }

        if((B+A ==n) && B!=0)
            printf("Case %d: BANGLAWASH\n",Case);
       else  if((W+A ==n)&& W!=0 )
            printf("Case %d: WHITEWASH\n",Case);
        else if(A==n)
            printf("Case %d: ABANDONED\n",Case);
        else if(W==B)
            printf("Case %d: DRAW %d %d\n",Case,W,T);
        else if(B>W)
            printf("Case %d: BANGLADESH %d - %d\n",Case,B,W);
        else if(W>B)
            printf("Case %d: WWW %d - %d\n",Case,W,B);
        Case++;

    }
}
