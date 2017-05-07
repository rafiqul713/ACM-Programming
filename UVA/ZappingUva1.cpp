#include<iostream>
#include<cstdio>
using namespace std;
int absolute(int x)
{
if(x>0)
    return x;
else
    return x*(-1);
}
int main()
{
    int a,b,ans;
while(scanf("%d %d",&a,&b)==2)
{
    if(a==-1 && b==-1)
        break;
        ans= absolute(a-b);
        if(ans>50)
            ans= 100- ans;
        cout<<ans<<endl;
}
}
