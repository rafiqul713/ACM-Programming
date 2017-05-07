#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
int MAT[1000][1000];
int dp[1000][1000];
int main()
{
    int T,N;
    int CASE=0;
    cin>>T;
        while(T--)
        {
            memset(MAT,-1,sizeof(MAT));
            memset(dp,0,sizeof(dp));
            cin>>N;
            for(int i=1;i<=N;i++)
            {
                for(int j=1;j<=i;j++)
                {
                    cin>>MAT[i][j];
                }
            }

            for(int i=N+1;i<=2*N-1;i++)
            {
                for(int j=1;j<=2*N-i;j++)
                {
                    cin>>MAT[i][j];
                }
            }

            dp[1][1]=MAT[1][1];

            for(int i=2;i<=N;i++)
            {
                for(int j=1;j<=i;j++)
                {
                    dp[i][j]= max(dp[i][j], dp[i-1][j]+MAT[i][j]);
                    dp[i][j]= max(dp[i][j],dp[i-1][j-1]+MAT[i][j]);
                }
            }
            for(int i=N+1;i<=2*N-1;i++)
            {
                for(int j=1;j<=2*N-i;j++)
                {
                    dp[i][j]= max(dp[i][j], dp[i-1][j]+MAT[i][j]);
                    dp[i][j]= max(dp[i][j],dp[i-1][j+1]+MAT[i][j]);
                }
            }
            printf("Case %d: %d\n",++CASE,dp[2*N-1][1]);
        }
}

