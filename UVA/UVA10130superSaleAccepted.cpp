//**************KNAPSACK-Rafiqul Islam Jack *******************//
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int cost[1000];
int weight[1000];
int DP[1001][102];
int capacity;
int item;
int maximum(int a, int b)
{
    return a>b?a:b;
}

int KNAPSACK(int i, int w)
{
    //init();
    if(i==item+1)
        return false;
    if(DP[i][w]!=-1)
        return DP[i][w];

    int profit1, profit2;
    profit1=profit2=0;

    if(w+weight[i]<=capacity)
    profit1= cost[i]+KNAPSACK(i+1,w+weight[i]);

    profit2= KNAPSACK(i+1,w);

    DP[i][w]= maximum(profit1,profit2);

    return DP[i][w];
}


int main()

{
    int T;
    cin>>T;
    while(T--)
    {
    //cout<<"How many Item: ";
    cin>>item;

    for(int j=1;j<=item;j++)
    {
        //cout<<"Give weight and cost \n";
        cin>>cost[j]>>weight[j];

    }
    int g,jack,ans=0;
    //cout<<"how many group member: ";
    cin>>g;
    while(g--)
    {
        //cout<<"Capacity: ";
        cin>>capacity;
        memset(DP,-1,sizeof(DP));
        jack= KNAPSACK(1,0);
        ans=ans+jack;
    }
    cout<<ans<< endl;
    }

}

