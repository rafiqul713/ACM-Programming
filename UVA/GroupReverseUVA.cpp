#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
int main()
{
 char jack[100];
 int i,j,len,n,group,A;
 while(scanf("%d",&n)==1)
 {
     if(n==0)
        break;
     scanf(" ");
     gets(jack);
     len= strlen(jack);
     group= len/n;
     for(i=1;i<=n;i++)
     {
        A= i*group;
        for(j=A-1;j>=A-group;j--)

            printf("%c",jack[j]);


     }
     printf("\n");

 }

}
