#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int arr[100],i,count;
    int n, first, second,j;
    bool flag;
    while(scanf("%d",&n)==1)
    {
        flag=false;
        for(j=0;j<n;j++)
        {

            for(i=0;i<10;i++)
            {
                scanf("%d",&arr[i]);
            }
        if(j==0)
            printf("Lumberjacks:\n");
            first = arr[0];
            second= arr[1];
            if(first>second)
            {
                count=0;
                for(i=0;i<9;i++)
                if(arr[i]>arr[i+1])
                {
                    count++;
                }
            }

            else if(second>first)
            {
                count=0;
                for(i=0;i<9;i++)
                    if(arr[i]<arr[i+1])
                {
                    count++;
                }
            }

            if(count==9)
                printf("Ordered\n");
            else
                printf("Unordered\n");
        }
    }
}
