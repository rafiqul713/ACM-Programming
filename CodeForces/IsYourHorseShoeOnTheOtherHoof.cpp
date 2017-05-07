#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
int counter;
counter=0;
int i;
long long int arr[10];
for(i=0;i<4;i++){
    cin>>arr[i];
}
sort(arr,arr+4);

/*cout<<"Sorting here: \n";
for(i=0;i<4;i++){
    cout<<arr[i]<  "  ";
}
*/
for(i=0;i<4-1;i++){
    if(arr[i]==arr[i+1]){
        counter++;
    }
}
cout<<counter<<endl;
}
