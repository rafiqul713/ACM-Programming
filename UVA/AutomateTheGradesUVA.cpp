#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int T1,T2,F,C1,C2,C3,avg,A,Total;
    int a,i;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        cin>>T1>>T2>>F>>A>>C1>>C2>>C3;
        if(C1<=C2 && C1<=C3)
        {
            avg= (C2+C3)/2;
        }
        else if(C2<=C1 && C2 <= C3)
        {
            avg= (C1+C3)/2;
        }
        else if(C3<=C1 && C3<= C2)
        {
            avg= (C1+C2)/2;
        }

        Total= T1+T2+F+A+avg;
        if(Total>=90)
            printf("Case %d: A\n",i);
        else if(Total >=80 && Total<90)
            printf("Case %d: B\n",i);
        else if(Total>=70 && Total<80)
            printf("Case %d: C\n",i);
        else if(Total>=60 && Total< 70)
            printf("Case %d: D\n",i);
        else if(Total<60)
            printf("Case %d: F\n",i);

    }
}
