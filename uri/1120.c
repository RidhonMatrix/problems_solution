#include<stdio.h>
#include<string.h>
int * filterFrontZero(char *a)
{
    int n=strlen(a);
    int i,j,k=0;
    static char temp[10000];
    for(i=0;a[i]!='\0';i++){
        if(a[i]!='0') break;
    }
    for(j=i;a[j]!='\0';j++){
        temp[k++]=a[j];
    }
    temp[k]='\0';
    return temp;
}
int checkZero(char a[])
{
    int i;
    int n=strlen(a);
    for(i=0;i<n;i++){
        if(a[i]!='0') return 1;
    }
    return 0;
}
int * filter(char a[],char ch)
{
    static char temp[1000];
    int i,j=0;
    int n=strlen(a);
    for(i=0;i<n;i++){
        if(ch!=a[i]){
            temp[j++]=a[i];
        }
    }
    temp[j]='\0';
    return temp;
}
int main()
{
    char s[1000];
    int x;
    while(1){
        scanf("%d",&x);
        scanf("%s",s);
        if(x==0 && strcmp(s,"0")==0) break;
        int ch=x+48;
        char *ans=filter(s,ch);
        ans=filterFrontZero(ans);
        //printf("%s\n",ans);
//        char *ans2=againFilter(ans);
        if(checkZero(ans)==1){
            printf("%s\n",ans);
        }
        else printf("0\n");
    }
    return 0;
}
