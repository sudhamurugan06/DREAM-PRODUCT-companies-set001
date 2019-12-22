#include<stdio.h>
#include <stdlib.h>

int main()
{
int x,y,z;
char a,b;
scanf("%d%c%d%c%d",&x,&a,&y,&b,&z);
if(x+y==z)printf("+");
else if(x*y==z)printf("*");
else if(x-y==z)printf("-");
else printf("/");
}
