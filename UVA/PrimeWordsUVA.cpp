#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

int is_prime(int n)
{
    if(n <= 2)
    return true;
    if(n % 2 == 0)
    return false;

    for(int i = 3;i <= n/ i;i += 2)
        if(n % i == 0)
    return false;

    return true;
}


int main()
{

char jack[100];
int i,len;
int sum;
while(gets(jack))
{
sum=0;
len = strlen(jack);
for(i=0;i<len;i++)
{
if(jack[i]>= 'A' && jack[i]<='Z')
{
sum= (sum+jack[i] ) - 38;
}
else if(jack[i]>= 'a' && jack[i]<='z')
{
sum = (sum+ jack[i]) - 96;
}
}

if(is_prime(sum)==true)
cout<<"It is a prime word.\n";
else
cout<<"It is not a prime word.\n";

}
}
