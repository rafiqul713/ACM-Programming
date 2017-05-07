#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    long long arr[100000],i=0,j,n,jack;
    while(scanf("%ld",&n)==1)
    {
        arr[i]=n;
        sort(arr,arr+i+1);

        if(i%2==0)
        {
            printf("%ld\n",arr[i/2]);
        }
        else
        {
            jack= arr[i/2]+arr[i/2+1];
            printf("%ld\n", jack/2);
        }
        i++;
    }

}
