#include<iostream>
#include<cstdio>
#include<stack>
#include<cstring>
using namespace std;
int main()
{
    char str[150];
    int i,j,n,len;
    cin>>n;
    gets(str);
    while(n--)
    {
        stack<char>s;
        gets(str);
        len= strlen(str);
        for(i=0;i<len;i++)
        {
            if(str[i]=='(' || str[i]=='[')
                s.push(str[i]);
            else if(str[i]==')')
            {
                if(s.empty() || s.top()!='(')
                {
                    s.push('A');
                    break;
                }
                s.pop();
            }
            else if(str[i]==']')
            {
                if(s.empty() || s.top()!='[')
                {
                    s.push('B');
                    break;
                }
                s.pop();
            }
        }
        if(s.empty()==true)
            cout<<"Yes\n";
        else
        cout<<"No\n";
    }

}
