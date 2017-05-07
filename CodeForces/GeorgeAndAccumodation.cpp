#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int N,p,q,i,counter,diff;
    cin>>N;
    {
        counter=0;
        for(i=1;i<=N;i++){
            cin>>p>>q;
            diff= q-p;
            if(diff>=2){
                counter++;
            }
            else{
                continue;
            }
        }
        cout<<counter<<endl;

    }
}

