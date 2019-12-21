#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,i=0,a[100],p=0,sum=1;
while(scanf("%d",&n)==1){
    a[i++]=n;
}
for(int j=0;j<i;j++)
{
    p=j;
    for(int k=0;k<i;k++){
if(p!=k)
    {
        sum=sum*a[k];
    }
    }
    printf("%d ",sum);p=0;sum=1;
}

}
