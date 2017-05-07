#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int arr[100],t,N,i,j,low, high,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {

        scanf("%d",&N);
        low=0;
        high=0;
        for(i=0;i<N;i++)
            scanf("%d",&arr[i]);
        for(j=0;j<N-1;j++)
        {
            if(arr[j]>arr[j+1])
                low++;
            if(arr[j]<arr[j+1])
                high++;
            if(arr[j]==arr[j+1])
                continue;
        }
        printf("Case %d: %d %d\n",k+1,high,low);
    }
}
