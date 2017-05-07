#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<map>
using namespace std;
map<string,string>graph;
map<string,int> counting;
int c(int x)
{

      return  x ? x:1;

}
string find_rep(string r)
{
    if(graph[r]=="")
        return r;
    else
        return graph[r]= find_rep(graph[r]);
}
int join(string s1, string s2)
{
    string u,v;
    u= find_rep(s1);
    v= find_rep(s2);
    if(u!=v)
    {
        graph[u]=v;
        counting[v]= c(counting[u])+c(counting[v]);
        return counting[v];
    }
    return counting[u];
}
int main()
{
    string s1,s2;
    int t,F;
    cin>>t;
    while(t--)
    {
        graph.clear();
        counting.clear();
        cin>>F;
        while(F--)
        {
            cin>>s1>>s2;
            cout<<join(s1,s2)<<endl;
        }

    }
}
