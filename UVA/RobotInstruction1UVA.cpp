#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    int i;
    string instruction;
    int  lastPosition[1000];
    int position;
    int same;
    int num_of_instruction;
    while(cin>>t)
    {

        while(t--)
        {
            position=0;
            cin>>num_of_instruction;
            for(i=1;i<=num_of_instruction;i++)
            {
                cin>> instruction;
                if(instruction=="LEFT")
                {
                    position= position-1;
                    lastPosition[i] = -1;
                }
                else if(instruction=="RIGHT")
                {
                    position= position+1;
                    lastPosition[i]= 1;
                }
                else
                {
                    cin>>instruction;
                    cin>>same;
                    if(lastPosition[same]==-1)
                    {
                        position= position-1;
                        lastPosition[i]=  -1;
                    }
                    else if(lastPosition[same]==1)
                    {
                        position= position+1;
                        lastPosition[i] = 1;
                    }
                }
            }
            cout<<position<<endl;
        }
    }
}
