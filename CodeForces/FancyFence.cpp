#include<iostream>
#include<cstdio>
using namespace std;
/*
Each interior angle of regular polygon A=  (180* (N-2))/N
number of Sides N = (360) /(180-A)

*/
int main(){
int T,A,N;
cin>>T;
while(T--){
    cin>>A;
    if( 360 % (180-A)== 0){
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }
}

}
