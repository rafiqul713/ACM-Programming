#include<iostream>
#include<cstdio>
using namespace std;
int f91(int N)
{
    if(N>=101)
    {
        return N-10;
    }
    else if(N<=100)
    {

        return f91(f91(N+11)) ;

    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        else
        //cout<<f91(n)<<endl;
        printf("f91(%d) = %d\n",n,f91(n));
    }
}
