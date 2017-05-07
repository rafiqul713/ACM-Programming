///Rafiqul Islam
#include<iostream>
#include<cstdio>
using namespace std;

long long int arr[1000050];
void prime(long long int n)
{
    long long int i,j;
    for(i=0;i<=n;i++)
        arr[i]=1;
    arr[0]=arr[1]=0;

    for(i=2;i<=n;i++)
    {
        if(arr[i]==1)
        {
            for(j=i;i*j<=n;j++)
                arr[i*j]=0;
        }
    }

}

int main()
{
    long long int n,m,i,j;
    prime(1000000);
    while(scanf("%lld",&n)!=EOF && n>0){
      for(i=0; i<=n;i++)
        {
            if(arr[i]==1 && (arr[n-i]==1)){
                    /*
                    *here, checking prime
                    *if n=20 then 3+17 , 3 and 17 must be Prime
                    * Example: n=20, i=3;
                    *if arr[i]==3 and arr[n-i]==17
                    *arr[3]==3 and  arr[20-3]==17
                    */
                printf("%lld = %lld + %lld\n",n,i,n-i);
                break;
            }
        }
    }

}
