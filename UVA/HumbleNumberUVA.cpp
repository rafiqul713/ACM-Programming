#include<iostream>
#include<cstdio>
using namespace std;
int iIndex,jIndex,kIndex,lIndex;
long long int minimum(long long int p, long long int q,  long long int r, long long s)
{
    int min;
    min=p;
    if(q<min)
        min=q;
    if(r<min)
        min=r;
    if(s<min)
        min= s;

    if(min==p)
        iIndex++;
    if(min==q)
        jIndex++;
    if(min==r)
        kIndex++;
    if(min==s)
        lIndex++;
    return min;
}
int main()
{
    long long int ugly[7000];
    int i;
    ugly[0]=0;
    ugly[1]=1;
    iIndex=jIndex=kIndex=lIndex=1;
    for(int iter=2;iter<=6000;iter++)
    {
        ugly[iter]= minimum(2*ugly[iIndex],3*ugly[jIndex],5*ugly[kIndex], 7*ugly[lIndex]);
    }
    while(scanf("%d",&i)==1 && i!=0)
    {

    if(i%100 >=10 && i%100<=19)
    {
        printf("The %dth humble number is %lld.\n",i,ugly[i]) ;
    }
   else  if(i%10==1)
    {
    printf("The %dst humble number is %lld.\n",i,ugly[i]) ;
    }
    else if(i%10==2)
    {
        printf("The %dnd humble number is %lld.\n",i,ugly[i]);
    }
    else if(i%10==3)
    {
        printf("The %drd humble number is %lld.\n",i,ugly[i]);
    }
    else
    {
    printf("The %dth humble number is %lld.\n",i,ugly[i]);
    }
    }
}

