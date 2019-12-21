#include<stdio.h>
#include<stdlib.h>
int main()
{
int x1,x2,y1,y2,z1,z2,w1,w2,c=0,c1=0;
scanf("%d %d\n%d %d\n%d %d\n%d %d",&x1,&x2,&y1,&y2,&z1,&z2,&w1,&w2);
if((x1&&z1==0)||(x2&&z2==0)||(x1==z1)||(x2==z2))
{
c++;
}
if((y1&&w1=0)||(y2&&w2==0)||(y1==w1)||(y2==w2))
{
c1++;}
if(y2&&w2<0)
{
c1--;
}
if(c==c1)printf("yes");
else
printf("no");
}
