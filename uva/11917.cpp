#include <stdio.h>
#include<string.h>
#include<math.h>
char s[2100][20];
int a[2100];
int c=1,n,i,j,d;
char temp[30];
int findStr()
{
    for(i=0;i<n;i++){
        if(strcmp(temp,s[i])==0){
            if(a[i]<=d) return 1;
            else if(a[i]<=(d+5)) return 0;
            else return -1;
        }
    }
    return -1;
}
int main()
{

    int t;scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%s %d",s[i],&a[i]);
        }
        scanf("%d",&d);
        scanf("%s",temp);
        if(findStr()==1) printf("Case %d: Yesss\n",c++);
        else if(findStr()==0) printf("Case %d: Late\n",c++);
        else printf("Case %d: Do your own homework!\n",c++);

    }
    return 0;
}
