#include<iostream>
#include<cstdio>
using namespace std;
int fib(int n)
{
    if(n==1 || n==0)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        cout<<fib(n)<<endl;
    }

}
