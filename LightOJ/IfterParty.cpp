#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
     long long int p,l,cq,i,j,k;
     int T,z;

// while(scanf("%d",&T)){
    cin>>T;
    for( z=1;z<=T;z++){
            vector<long long int>v;
        v.clear();
        cin>>p>>l;
        cq=p-l;
        for(i=1;i*i<=cq;i++){
            if(cq%i==0){
            if(i>l){
                v.push_back(i);
            }
            if((cq/i>l)  && (i*i!=cq)){
                v.push_back(cq/i);
            }
            }
        }

    sort(v.begin(),v.end());
    printf("Case %d: ", z);
    if(v.empty()){
        cout<<"impossible\n";
    }
    else{
        for(int aa=0;aa<v.size()-1;aa++){
            cout<<v[aa]<<" ";

        }
        cout<<v[v.size()-1]<<endl;

    }
}
//}
}
