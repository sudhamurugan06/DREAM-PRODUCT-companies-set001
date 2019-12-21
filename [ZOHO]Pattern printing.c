#include <stdlib.h>

int main()
{
int n,p=1;
scanf("%d",&n);
int t=n,a[n][n];
for(int i=0;i<n;i++)
{
    for(int j=0;j<t;j++)
    {
      a[j][i]=p;
      p++;}
      t--;
}
t=n;
for(int i=0;i<n;i++)
{
    for(int j=0;j<t;j++)
    {
        printf("%d ",a[i][j]);
    }
    t--;
    printf("\n");
}

}
