#include<stdio.h>
int main()
{
int n,m;
scanf("%d %d",&n,&m);
int a[n][m],b[m][n];
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
scanf("%d",&a[i][j]);
}
}
int s=m,ps=0,bt=0;
for(int i=s;i>=0;i--)
{
for(int j=0;j<n;j++)
{
b[ps][bt++]=a[j][i];
}
ps++;
bt=0;
}
for(int i=1;i<=s;i++)
{
for(int j=0;j<n;j++)
{
printf("%d ",b[i][j]);
}
printf("\n");
}
}
