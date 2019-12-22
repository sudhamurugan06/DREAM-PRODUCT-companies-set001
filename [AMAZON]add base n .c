***Base "n" numbers are added to form base 10*************

#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,x,y;
scanf("%d\n%d %d",&n,&x,&y);
int p=x,s=y,rem=0,t=1,sum=0,sum1=0;
while(p>0)
{
    rem=p%10;
    p=p/10;
    sum=rem*t+sum;
    t=n*t;
}
rem=0;t=1;
while(s>0)
{
    rem=s%10;
    s=s/10;
    sum1=rem*t+sum1;
    t=n*t;
}
printf("%d",sum+sum1);    
    
}
