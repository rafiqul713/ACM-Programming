#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char str[10000];

int main(){
int len,i,counter,x,j;
gets(str);
len= strlen(str);
//cout<<"len: "<<len<<endl;
counter=0;
for(i=0;i<len;i++){
    if(str[i]=='4' || str[i]=='7'){
        counter++;

    }
    else{
        continue;
    }
}
i=0;
j=0;
while(counter>0){
    x = counter%10;
    counter= counter/10;
    i++;
    if(x==4 || x==7){
        j++;
    }
}
if(j==i && j>0){
    cout<<"YES\n";
}
else{
    cout<<"NO\n";
}

}
