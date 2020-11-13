#include <stdio.h>
#include<string.h>
#include<math.h>
int checkSquar(double n){
    int temp=(int)n;
    if(n==temp) return 1;
    return 0;
}
int main()
{
    int t;scanf("%d",&t);
    char s[20000];
    double n;
    int i,j,k;
    char a[100][100];
    char dummy;scanf("%c",&dummy);
    while(t--){
        gets(s);
        k=0;
        n=sqrt(strlen(s));
        if(checkSquar(n)==0){
            printf("INVALID\n");
        }
        else{
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    a[i][j]=s[k++];
                }
            }
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    printf("%c",a[j][i]);
                }
            }
            printf("\n");
        }

    }
    return 0;
}