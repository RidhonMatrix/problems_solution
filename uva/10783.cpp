#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int x,y,temp,sum,c=1;
    while(t--){
        sum=0;
        scanf("%d %d",&x,&y);
        if(x>y){
            temp=y;
            y=x;
            x=temp;
        }
        int i;
        for(i=x;i<=y;i++){
            if(i%2==1) sum+=i;
        }
        printf("Case %d: %d\n",c,sum);
        c++;
    }
    return 0;
}
