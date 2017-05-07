#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int arr1[1000000];
char arr[1000000];
int pow(int base, int power){
if(base==0){
    return 0;
}
if(power==0){
    return 1;
}
else {

    return base*pow(base,power-1);
}
}
int main(){
int a,b,len,i,j,p;
int sum=0;

while(scanf("%s",arr)!=EOF){
    len  = strlen(arr);
    for(i=0;i<len;i++){
    arr1[i]= arr[i]-'0';
    }
    if(arr1[0]==0 && len==1){
        break;
    }
    sum=0;
    for(i=len-1,j=1;i>=0,j<=len;i--,j++){
            p= pow(2,j)-1;
        sum =  sum+arr1[i]*p;
    }
    cout<<sum<<endl;
}

}
