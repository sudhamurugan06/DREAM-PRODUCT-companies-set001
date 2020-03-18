char *s=malloc(100*sizeof(char));
scanf("%[^\n]s",s);
int l=strlen(s)-1;
int n,m;
scanf("\n%d\n%d",&n,&m);int p=n;
for(int i=0;i<=l;i++)
{
    if(isalpha(s[i])){
        if(s[i]=='z'){
            s[i]='a';
            n=n-1;
        }
        printf("%c",s[i]+n);
    }
    n=p;
    else if(isdigit(s[i]))
    {
        int k=s[i]-48;
        printf("%d",k+m);
    }
    else printf("%c",s[i]);
}
free(s);
}
