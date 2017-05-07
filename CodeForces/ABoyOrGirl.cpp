#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
char str[10000];
int len,i,j,counter;
bool flag;
gets(str);
counter=0;
len= strlen(str);
for(i=0;i<len;i++){
    flag=true;
    for(j=0;j<i;j++){
        if(str[i]==str[j]){
            flag=false;
            break;
        }
    }
    if(flag){
        counter++;
    }
}
if(counter%2==0){
    cout<<"CHAT WITH HER!\n";
}
else{
    cout<<"IGNORE HIM!\n";
}
}
