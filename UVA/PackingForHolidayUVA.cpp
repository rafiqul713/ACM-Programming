#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int l,w,h,T,j,i;
    while(cin>>T)
    {
        j=1;
        for(i=0;i<T;i++)
        {

        cin>>l>>w>>h;
        if(l<=20 && w<=20 && h<=20)
        printf("Case %d: good\n",j++);
        else
            printf("Case %d: bad\n",j++);
        }
    }


}
