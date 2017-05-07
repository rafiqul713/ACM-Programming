#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int arr[25]={2,7,2,3,3,4,2,5,1,2};
char str[1000];
int a,b;
gets(str);
a= str[0]-'0';
b= str[1]-'0';
cout<<arr[a]*arr[b]<<endl;
}
