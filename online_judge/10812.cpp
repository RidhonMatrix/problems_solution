#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int c=1;
    long long int x,y;
    while(c<=t){
        scanf("%d %d",&x,&y);
        int s=x+y;
        int d=x-y;
        if( s%2==0 && d%2==0 && d>=0){
            int a=s/2;
            int b=d/2;
            if(a>b){
                printf("%d %d\n",a,b);
            }
            else{
                printf("%d %d\n",b,a);
            }
        }
        else{
            printf("impossible\n");
        }
        c++;
    }
    return 0;

}
