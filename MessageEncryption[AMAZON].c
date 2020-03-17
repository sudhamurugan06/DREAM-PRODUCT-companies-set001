int main()
{
    char s[200];
    scanf("%s",s);
    int n;
    scanf("%d",&n);
    int o=strlen(s)-1,k=0;
    o=o/n;
   // printf("%d",o);
    char a[o][n];
    for(int i=1;i<=o+1;i++)
    {
        if(i%2!=0){
        for(int j=1;j<=n;j++)
        {
            a[i][j]=s[k++];
            //printf("1%c\n",a[i][j]);
        }}
        else
        {
            for(int j=n;j>=1;j--){
            a[i][j]=s[k++];
           // printf("%c\n",a[i][j]);
            }
       }
    }
    for(int j=1;j<=n;j++)
    {
        for(int i=1;i<=o+1;i++)
        {
            printf("%c",a[i][j]);
        }
    }
