#include<iostream>
#include<cstdio>
using namespace std;
int iIndex,jIndex,kIndex;
long long int minimum(long long int p, long long int q,  long long int r)
{
    int min;
    min=p;
    if(q<min)
        min=q;
    if(r<min)
        min=r;

    if(min==p)
        iIndex++;
    if(min==q)
        jIndex++;
    if(min==r)
        kIndex++;
    return min;
}
int main()
{
    long long int ugly[1600];
    ugly[0]=0;
    ugly[1]=1;
    iIndex=jIndex=kIndex=1;
    for(int iter=2;iter<=1502;iter++)
    {
        ugly[iter]= minimum(2*ugly[iIndex],3*ugly[jIndex],5*ugly[kIndex]);
    }
    cout<<"The 1500'th ugly number is "<<ugly[1500]<<"."<<endl;

}
