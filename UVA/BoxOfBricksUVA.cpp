#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int arr[100],n,total,i,avg,movee,sett=1;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        total=0;
        movee=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
            total=total+arr[i];

        avg= total/n;

        for(i=0;i<n;i++)
            if(arr[i]>avg)
            movee = movee+(arr[i]-avg);

            printf("Set #%d\n",sett);
            sett++;
            printf("The minimum number of moves is %d.\n\n",movee);



    }
}
