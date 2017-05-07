#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int N,M,day,counter;
day=0;
counter=0;
cin>>N>>M;
while(N--){
    day++;
    counter++;
if(day==M){
    N++;
    day=0;
}
}
cout<<counter<<endl;
}

