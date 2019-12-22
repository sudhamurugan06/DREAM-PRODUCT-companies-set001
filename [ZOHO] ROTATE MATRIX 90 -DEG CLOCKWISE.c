#include<stdio.h>
#include <stdlib.h>

int main()
{
int r,c;
scanf("%d\n%d",&r,&c);
int a[r][c];
for(int i=1;i<=r;i++)
{
    for(int j=1;j<=c;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
int b[c][r];
for(int i=1;i<=c;i++)
{
    for(int j=r;j>=1;j--)
    {
        scanf("%d ",a[j][i]);
    }
    printf("\n");
}


}
