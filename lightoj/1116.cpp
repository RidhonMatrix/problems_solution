#include<stdio.h>
int main()
{
    long long i,n,x,y,j;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&x);
        y=x;
        if(x%2==1){
            printf("Case %lld: Impossible\n",i);
        }
        else{
            while(x%2==0){
                x=x/2;
            }
            for(j=1;1<10;j++){
                if((x*j)==y) break;
            }
            printf("Case %lld: %lld %lld\n",i,x,j);
        }
    }
 
}