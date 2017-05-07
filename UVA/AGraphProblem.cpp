#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int arr[1000];
int N;
arr[0]=arr[1]=1;
arr[2]=2;
for(int i=3;i<=100;i++){
    arr[i] =arr[i-3]+arr[i-2];
}
while(scanf("%d",&N)!=EOF){
cout<<arr[N]<<endl;
}
}
