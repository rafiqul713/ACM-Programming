//UVA 11388 GCD LCM

#include<stdio.h>
int main()
{
    int gcd, lcm, i, t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&gcd,&lcm);
        if(lcm%gcd==0)
            printf("%d %d\n",gcd,lcm);
        else
            printf("-1\n");

    }
    return 0;
}
