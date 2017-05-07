#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    char jack[1000];
    int i,j, count, flag;
    while(gets(jack))
    {
        count = 0;
        flag=1;
        for(i=0;jack[i]!='\0'; i++)
        {
            if((jack[i]>='a' && jack[i]<='z') || jack[i]>='A' && jack[i]<='Z')
            {
                if(flag==1)
                    count++;
                flag=0;
            }
            else
            flag=1;

        }
        printf("%d\n",count);
    }
}
