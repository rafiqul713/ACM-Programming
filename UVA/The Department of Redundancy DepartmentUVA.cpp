#include<cstdio>
#include<iostream>
#include<map>
#include<vector>

using namespace std;
int main()
{
    vector<int> v;
    map<int,int> m;
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        if(m[n]==0)
        v.push_back(n);
        m[n]++;
    }
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" "<<m[v[i]]<< endl;
}
