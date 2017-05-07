#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#define PI acos(-1.0)
using namespace std;
double area_of_circle(double r){
    return PI*r*r;
}

int main(){
int N,i;
double r,area,n,m,sum;
double arr[10000],arr1[10000];
cin>>N;
for(i=1;i<=N;i++){
   cin>>r;
    arr[i]=r;
}

sort(arr+1,arr+N+1);
for(i=1;i<=N;i++){
 area = area_of_circle(arr[i]);
 arr1[i] = area;

}

sum =0;
for(i=1;i<=N;i++){
    if(i%2==1){
        sum= sum+arr1[i];
    }
    else{
        sum = sum-arr1[i];
    }
}
cout<<abs(sum)<<endl;

}

