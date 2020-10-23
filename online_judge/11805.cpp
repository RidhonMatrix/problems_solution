#include<stdio.h>
int main()
{
    int t;scanf("%d",&t);
    int n,k,p,i;
    int c=1;
    while(t--){
        scanf("%d %d %d",&n,&k,&p);
        if(p>n) p=p%n;
        for(i=1;i<=p;i++){
            k++;
            if(k>n){
                k=1;
            }
        }
        printf("Case %d: %d\n",c++,k);
    }
    return 0;
}
