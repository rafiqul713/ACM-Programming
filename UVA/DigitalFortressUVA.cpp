#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    int len, s,s2,t,i,j;
    char str[1000000];
    while(scanf("%d",&t)==1)
    {
        scanf("\r");
        for(i=0;i<t;i++)
        {
            gets(str);
            len= strlen(str);
            s= sqrt(len);
            if(s*s==len)
            {
                for(i=0;i<s;i++)
                {
                    for(j=i;j<len;j=j+s)
                    {
                        printf("%c",str[j]);
                    }

                }
                printf("\n");
            }

            else
            {
                printf("INVALID\n");
            }
        }
    }
}
