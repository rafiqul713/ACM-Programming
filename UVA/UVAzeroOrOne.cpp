#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a==b && b==c)
            printf("*\n");
        else if(a==b && b!=c)
        printf("C\n");
        else if(a==c && a!=b)
            printf("B\n");
        else if(a!=b && a!=c)
            printf("A\n");
    }

}
