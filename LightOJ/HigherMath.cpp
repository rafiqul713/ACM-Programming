#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int T;
long long int a,b,c;
cin>>T;
for(int i=1;i<=T;i++){
    cin>>a>>b>>c;
    if((a*a+b*b==c*c)||(a*a+c*c==b*b) || (b*b+c*c==a*a)){
        printf("Case %d: yes\n",i);
    }
    else{
        printf("Case %d: no\n",i);
    }
}
}
