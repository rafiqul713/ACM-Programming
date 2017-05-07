#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main(){
char str[1000];
int arr[1000];
int i,len,a,j;

//while(gets(str)){
gets(str);
j=0;

len= strlen(str);
for(i=0;i<len;i++){

    if(str[i]>= '0' && str[i]<='9'){
        arr[j] =  atoi(&str[i]);
         j++;
    }

}
sort(arr,arr+j);
for(i=0;i<j;i++){
    cout<<arr[i];
    if(i<j-1){
        cout<<"+";
    }
    else{
        continue;
    }
}
cout<<endl;


 //}

}
