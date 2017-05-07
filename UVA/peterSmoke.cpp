#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,k;
    int a,j;

    while(scanf("%d %d", &n, &k) == 2 && k>1)
    {
        a=n;

        while(n>=k)
        {
            a=a+(n/k);
            n=(n/k)+(n%k);
        }



        cout<< a<< endl;



    }
}
