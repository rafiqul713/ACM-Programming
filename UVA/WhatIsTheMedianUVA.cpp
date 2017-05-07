#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    int arr[10000],i,j,k,num;
    i=0;
    while(scanf("%d",&num)==1)
    {
        arr[i]=num;
        sort(arr,arr+i+1);
        if(i%2==0)
            printf("%d\n",arr[i/2]);
        else
          {

            j= arr[i/2]+arr[i/2+1];
        printf("%d\n",j/2);
          }
        i++;
    }
}
