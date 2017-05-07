#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char jack[1000],l;
    int i,j;
    while(scanf("%s",&jack)==1)
    {
        l=strlen(jack);
        for(i=0;i<l;i++)
        {
        if((jack[i]=='A')||(jack[i]=='B')||(jack[i]=='C'))
        cout<<'2';
        else if((jack[i]=='D')||(jack[i]=='E')||(jack[i]=='F'))
        cout<< '3';
        else if((jack[i]=='G')||(jack[i]=='H')||(jack[i]=='I'))
        cout<< '4';
        else if((jack[i]=='J')||(jack[i]=='K')||(jack[i]=='L'))
        cout<< '5';
        else if((jack[i]=='M')||(jack[i]=='N')||(jack[i]=='O'))
        cout<< '6';
        else if((jack[i]=='P')||(jack[i]=='Q')||(jack[i]=='R')||(jack[i]=='S'))
        cout<< '7';
        else if((jack[i]=='T')||(jack[i]=='U')||(jack[i]=='V'))
        cout<< '8';
        else if((jack[i]=='W')||(jack[i]=='X')||(jack[i]=='Y')||(jack[i]=='Z'))
        cout<< '9';
        else
        cout<< jack[i];
        }
        cout << endl;
        }

return 0;
}
