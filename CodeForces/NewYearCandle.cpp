#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int A,B,hour;
cin>>A>>B;
hour=A;
while(A>=B){
    hour = hour+ A/B;
    A= (A%B)+ (A/B);

}
cout<<hour<<endl;
}
