#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int arr[3010], jack[3010],i,j;
    int t,k;
    bool flag;
    while(scanf("%d",&t)==1)
    {
        flag= true;
        for(i=0;i<t;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(j=0;j<t-1;j++)
        {
            jack[j]= abs(arr[j+1]-arr[j]);
        }
        sort(jack,jack+j);
        for(k=1;k<t;k++)
        {
            if(jack[k]==jack[k-1])
            {
                flag=false;
                break;
            }

        }
        if(flag==false)
                printf("Not jolly\n");
            else
                printf("Jolly\n");
    }
}
