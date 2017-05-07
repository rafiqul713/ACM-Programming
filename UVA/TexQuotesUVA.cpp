#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char s[1000];
    int len,i,j,jack=0;
    while(gets(s))
    {
        len= strlen(s);
        for(i=0;i<len;i++)
        {
            if(s[i]=='"')
            {
                jack++;
                if(jack%2==1)
                    printf("``");
                    else
                        printf("''");
            }
            else
                printf("%c",s[i]);
        }
        printf("\n");
    }
}
