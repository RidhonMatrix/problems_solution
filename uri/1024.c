#include<stdio.h>
#include<string.h>
void halfShift(char a[]){
    int n=strlen(a);
    int i;
    for(i=n/2;i<n;i++){
        a[i]=a[i]-1;
    }

}
void swap(char *a,char *b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}
void reverse(char a[]){
    int i,j;
    int n=strlen(a);
    for(i=0,j=n-1;i<(n/2);i++,j--){
        swap(&a[i],&a[j]);
    }
}
void shiftThree(char a[])
{
    int i;
    for(i=0;a[i]!='\0';i++){
        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
            a[i]=a[i]+3;
        }
    }
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    char s[10002],dummy;
    int t;scanf("%d",&t);
    scanf("%c",&dummy);
    while(t--){
        gets(s);
        shiftThree(s);
        reverse(s);
        halfShift(s);

        printf("%s\n",s);
    }
    return 0;
}
