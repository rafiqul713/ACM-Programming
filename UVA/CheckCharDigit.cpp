 #include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
int x,l;
char y,ch[10];
while( gets(ch)){
l=strlen(ch);
if(1<l || (ch[0]>='0' && ch[0]<='9'))
{
x=atoi(ch);
if(0<=x)
printf("Number is positive\n");
else{
printf("Number is negtive\n");
continue;}
if((x%2)==0)
printf("even number\n");
else if((x%2)==1)
printf("Odd Number\n");
}
else
{

if(ch[0]>='A' && ch[0]<='Z')
printf("Upper Case\n");
else if(ch[0]>='a' && ch[0]<='z')
printf("lower case \n");
}
}
return 0;
}
