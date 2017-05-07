#include<iostream>
#include<cstdio>
#include<utility>
#include<cmath>
#include<algorithm>
using namespace std;
int binary_decimal(int n) /* Function to convert binary to decimal.*/

{
    int decimal=0, i=0, rem;
    while (n!=0)
    {
        rem = n%10;
        n/=10;
        decimal += rem*pow(2,i);
        ++i;
    }
    return decimal;
}

int main()
{
int b1,b2,b3,b4;
int d1,d2,d3,d4,CASE;
int T;
char B1,B2,B3,B4,D1,D2,D3,D4;
cin>>T;
CASE=0;
while(T--)
{

cin>>d1>>D1>>d2>>D2>>d3>>D3>>d4;
cin>>b1>>B1>>b2>>B2>>b3>>B3>>b4;
b1=binary_decimal(b1);
b2=binary_decimal(b2);
b3=binary_decimal(b3);
b4=binary_decimal(b4);
if(b1==d1 && b2==d2 && b3==d3 && b4==d4)
{
    printf("Case %d: Yes\n",++CASE);
}
else {
    printf("Case %d: No\n",++CASE);
}
}
return 0;
}
