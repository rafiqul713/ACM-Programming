#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    int a,b,jack;
    char eq,res[100],op;
    int counter=0;
    while(scanf("%d %c %d %c %s",&a,&op,&b,&eq,&res)==5)
    {
        if(isdigit(res[0]))
        {
            jack= atoi(res);
            if(op=='+' && (jack==a+b))
            {
                counter++;
            }
            if(op=='-' && (jack==a-b))
            {
                counter++;
            }
        }
    }
    cout<<counter<<endl;
}
