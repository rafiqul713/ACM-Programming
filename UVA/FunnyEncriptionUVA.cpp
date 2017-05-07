#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int b1,b2,b,dec,rem,h;
char bin[1000000];
char hex[1000000];
int T,i;
cin>>T;
while(T--){
    cin>>dec;
    b=dec;
    h=dec;
    sprintf(hex,"%d",h);
    i=0;
    int one=0;
    while(hex[i]){
         switch(hex[i]){
             case '0': //printf("0000");
              break;
             case '1': //printf("0001");
             one=one+1;
              break;
             case '2': //printf("0010");
             one=one+1;
             break;


             case '3': //printf("0011");
             one=one+2;
             break;

             case '4': //printf("0100");
             one=one+1;
             break;

             case '5': //printf("0101");
             one=one+2;
             break;

             case '6': //printf("0110");
              one=one+2;
              break;

             case '7': //printf("0111");
              one=one+3;
             break;

             case '8': //printf("1000");
             one=one+1;
              break;

             case '9': //printf("1001"); break;
             one=one+2;

         }
         i++;
    }

    i=0;
    while(b>0){
     rem= b%2;
     bin[i]= rem ;

     i++;
     b=b/2;

    }
    int binary =0;
    for(int k=i-1;k>=0;k--){
        if(bin[k]==1)
        binary++;
    }
    cout<<binary<<" "<<one<<endl;
}
}

