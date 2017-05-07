#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int bin[1000], i, n, countt;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        i=0;
        while(n!=0)
        {
            bin[i]= n%2;
            n= n/2;
            i++;
        }
        countt=0;
        printf("The parity of ");
        for(i=i-1;i>=0;i--)
        {

            printf("%d",bin[i]);
            if(bin[i]==1)
                countt++;
        }

        printf(" is %d (mod 2).\n", countt);
    }
}
