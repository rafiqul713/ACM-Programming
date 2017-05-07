#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int total, prev,N,i,level=0;
cin>>N;
total=N;
prev=0;
for(i=1;i<=total;i++){

  if(total>=i+prev){
    prev= prev+i;
    total= total-prev;
    level++;
  }

}
cout<<level<<endl;
}
