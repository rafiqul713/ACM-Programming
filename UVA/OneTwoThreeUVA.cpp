#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    string s;
    int t,i,jack;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        cin>>s;
        if(s.length()==5)
           {
            printf("3\n");
           }
        else

        {
        jack=0;
        if(s[0]=='t')
            jack++;
        if(s[1]=='w')
        jack++;
        if(s[2]=='o')
        jack++;
        if(jack>=2)
            printf("2\n");
        else
            printf("1\n");
        }
    }
}
