#include<iostream>
#include<cstdio>
using namespace std;
class Jack
{

public:
    int t,n,dis[100],i,max,min,Z;
int distancee()
{
    scanf("%d",&t);
    while(t--)
    {
        max=0;
        min=999;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&dis[i]);
        }
        for(i=0;i<n;i++)
        {
            if(dis[i]>max)
            {
                max= dis[i];
            }
            if(dis[i]<min)
            {
                min=dis[i];
            }
        }
            Z= (max-min)*2;
            cout<<Z<< endl;
        }

}
};
int main()
{
    Jack ob;
    ob.distancee();
}

