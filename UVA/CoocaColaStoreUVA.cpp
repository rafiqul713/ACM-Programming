#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int bottle,coke;
    while(scanf("%d",&bottle)==1)
    {
        coke=0;
        if(bottle==0)
            break;
        while(bottle>=3)
        {
            bottle = bottle-3;
            coke++;
            bottle++;

            if(bottle==2)
            {
                bottle++;
            }

        }
        printf("%d\n",coke);
    }
}
