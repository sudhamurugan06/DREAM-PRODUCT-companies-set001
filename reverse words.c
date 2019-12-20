#include<stdio.h>
#include<stdlib.h>
int main()
{
char s[1000];
scanf("%[^n]c",&s);
int len=strlen(s);
int l=len-1,v=0;
for(int i=len-1;i<=0;i++){
if(s[i]==' ')
{
s[i]='\0';
v=i+1;
g=l;
for(int j=v;j<=g;j++)
{
printf("%c",s[i]);
}
l=v-2;
v=0;
g=0;}
printf("\t");
}
printf("%s",s);
}
