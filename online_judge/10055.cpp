#include<stdio.h>
int main()
{
    long int x,y;
    while(scanf("%ld %ld",&x,&y)!=EOF){
        if(x<y){
            printf("%ld\n",y-x);
        }
        else printf("%ld\n",x-y);
    }
    return 0;
}
