#include<iostream>
#include<cstdio>
using namespace std;

int main(){
long long int a,b,c,d,e,f,N,T;
long long int fib[20000];
long long int Case=1;
cin>>T;
while(T--){
    scanf("%lld %lld %lld %lld %lld %lld %lld",&fib[0],&fib[1],&fib[2],&fib[3],&fib[4],&fib[5],&N);
    for(int i=6;i<=N;i++){
        fib[i]= (fib[i-1]+fib[i-2]+fib[i-3]+fib[i-4]+fib[i-5]+fib[i-6])%10000007 ;
    }
    printf("Case %lld: %lld\n",Case++,fib[N]%10000007);
}
}
