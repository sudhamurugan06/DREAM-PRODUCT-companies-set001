#include<stdio.h>
#include <stdlib.h>
void swap(int *x,int *y){
    int t=*x;
    *x=*y;
    *y=t;
}
void selectionsort(int a[],int n){
    int i,j,min;
    for(i=1;i<=n-1;i++)
    {
        min=i;
        for(j=i+1;j<=n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        swap(&a[min],&a[i]);
    }
}
void printarr(int a[],int n){int sum=0;
    for(int k=1;k<=n;k++){
    sum=sum+a[k];}
    printf("%d",sum);
}
int main()
{
int m,n;scanf("%d %d\n",&m,&n);
int a[m];
for(int i=1;i<=m;i++)
{
    scanf("%d ",&a[i]);
}
selectionsort(a,m);
printarr(a,n);
}
