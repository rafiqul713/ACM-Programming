#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int t,i,len;
    char s[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",&s);
        if(!strcmp(s,"1") || !strcmp(s,"4") || !strcmp(s,"78"))
        {
            printf("+\n");
        }
        else
        {
            len= strlen(s);
            if(s[len-2]=='3' && s[len-1]=='5')
                printf("-\n");
            else if(s[0]=='9' && s[len-1]=='4')
                printf("*\n");
            else if(s[0]=='1' && s[1]=='9' && s[2]=='0')
                printf("?\n");
        }
    }
}
