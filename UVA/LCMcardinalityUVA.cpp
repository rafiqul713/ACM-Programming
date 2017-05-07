#include <cstdlib>
#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include<iostream>
using namespace std;
static int divisors[1000000];
int gcd(int a,int b)
{
   return b==0 ? a:gcd(b,a%b);
}

int lcm(int a,int b)
{
    return a*(b/gcd(a,b));
}
bool check(int a ,int b,int n)
{
    return lcm(a,b)==n ? 1:0;
}
int main() {
    int n,top=0;
    int count=0;
    scanf("%d",&n);
    while(n!=0)
    {
        count=top=0;
        int k=sqrt(n)+1;
        for(int i=1;i<k;i++)
        {
            if(n%i==0)
            {
                divisors[top++]=i;
                if(i!=(n/i))
                    divisors[top++]=n/i;
            }
        }
        for(int i=0;i<top;i++)
            for(int j=i;j<top;j++)if(i!=j)
                count+=check(divisors[i],divisors[j],n);
        printf("%d %d\n",n,count+1);
        scanf("%d",&n);
    }
    return 0;
}
