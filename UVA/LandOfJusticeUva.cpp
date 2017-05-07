#include<iostream>
#include<cstdio>
using namespace std;
int main(){
long long int n,jack,ans;
while(cin>>n){
    if(n<0){
        break;
    }
    else {
            if(n==1){
                ans=0;
            }
            else{
        jack = 100/4; /// Equal Part, at first 100 divide by 2 beacause it is equal, then 50 divide 2 it is 25 and 25 can not divide
                            /// Equal part by dividing 2
                            /// so stop here.
                            /// the whole things can be write N/4;
        ans= jack*n;
        }
    }
    cout<<ans<<"%"<<endl;
}
}
