#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
char str[1000010];
int i,j,a,N,test=0,temp;
bool flag;
while(scanf("%s",str)!=EOF){
        if(strcmp(str,"\n")==false){
            break;
        }
    printf("Case %d:\n",++test);
    cin>>N;
    while(N--){
        cin>>i>>j;

        if(i>j){
            temp=i;
            i=j;
            j=temp;
        }

        if(i==j){
            printf("Yes\n");
            continue;
        }

        for(a=i;a<j;a++){
            //cout<<str[a]<<"   ==   "<<str[a+1]<<endl;
            if(str[a]==str[a+1]){
                flag=1;

            }
            else{
                flag=0;
                break;
            }
        }


        if(flag==1){
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }
}
return 0;
}
