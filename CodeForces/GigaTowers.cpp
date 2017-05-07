#include<iostream>
#include<cstdio>
using namespace std;
bool find_8(long long int floor){
if(floor<0){
    floor=-floor;
}
while(floor){
    if(floor%10==8){
        return true;
    }
    else{
        floor=floor/10;
    }
}
return false;
}
int main(){

long long int current_floor;
int counter;
while(scanf("%lld",&current_floor)!=EOF){
    counter=0;
    while(true){
        counter++;
        current_floor=current_floor+1;
        if(find_8(current_floor)==true){
            cout<<counter<<endl;
            break;
        }

    }

}
}


