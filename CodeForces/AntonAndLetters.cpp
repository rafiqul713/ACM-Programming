#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
  char str[100000];
  int COUNT[26];
  int total=0;
  for(int i=0;i<26;i++)
  {
    COUNT[i]=0;
  }
  gets(str);
  int len;
  len= strlen(str);
  for(int i=0;i<len;i++)
  {
    if(str[i]>='a' && str[i]<='z')
    {
        COUNT[ str[i]-'a'] = 1;
        //cout<<COUNT[str[i]-'a']<<endl;

    }
  }
  for(int i=0;i<26;i++)
  {
    total= total+COUNT[i];
  }
  cout<<total<<endl;

}
