#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    long int n,arr[1000],i,j;
    while(scanf("%ld",&n)==1)
    {
        i=0;

        if(n<0)
        {
            break;
        }
        else if(n==0)
        {
            printf("0");

        }
        else
        {

            while(n>0)
            {
            arr[i]= n%3;
            n= n/3;
            i++;
            }
        }
        for(j=i-1;j>=0;j--)
            printf("%ld",arr[j]);
            printf("\n");


    }
}
