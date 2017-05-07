#include<iostream>
#include<stdio.h>
using namespace std;
int main ()
{
    int  i, N;
   while(scanf("%d", &N)==1 && N!=0)
  {
    int sum=0, square;


        for(i=1; i<=N; i++)
    {
        square= i*i;
        sum= sum + square;

    }
    cout<< sum<< endl;;
  }
  return 0;
}
