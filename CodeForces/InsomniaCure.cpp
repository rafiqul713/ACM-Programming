#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int K,L,M,N,D,i;
int counter;
cin>>K>>L>>M>>N>>D;
counter=0;
for(i=1;i<=D;i++){
    if((i%K==0)  || (i%L==0) || (i%M==0) ||(i%N==0) ){
        //cout<<i<<"   ";
        counter++;
    }
}
//cout<<endl;
cout<<counter<<endl;

}
