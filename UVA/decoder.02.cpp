#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    char ch, a;
    while ( scanf("%c", &ch) !=EOF)
    {
        if( ch=='\n')
        {
            cout << '\n';
        }
        else
        {
            a= (ch-7);
            cout << a ;
        }
    }
    return 0;
}
