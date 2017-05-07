#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
long long int arr[1000010];
long long int Reverse(long long int N){
    long long int rev=0;
    while(N>0){
        rev= rev*10+ N%10;
        N=N/10;
    }
    return rev;
}
void seive(){
long long int i,j;
for(i=0;i<=1000005;i++){
    arr[i]=1;
}
arr[0]=arr[1]=0;
for(i=2;i<=1000005;i++){
    if(arr[i]==1){
        for(j=i;i*j<=1000005;j++){
            arr[i*j] =0;
        }
    }
}
}
int main(){

long long int N,rev_N,i,j;
 seive();
while(scanf("%lld",&N)==1){
    rev_N= Reverse(N);
    if((arr[N]==1) && (arr[rev_N]==1) && (rev_N!=N)){
     printf("%lld is emirp.\n",N);
    }
    else if(arr[N]==1){
     printf("%lld is prime.\n",N);
    }
    else if(arr[N]==0){
     printf("%lld is not prime.\n",N);
    }
}
return 0;
}
