#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    long int a,b;
    int c=1;
    while(c<=t){
        scanf("%ld %ld",&a,&b);
        if(a>b){
            printf(">\n");
        }
        else if(a<b){
            printf("<\n");
        }
        else{
            printf("=\n");
        }



        c++;
    }
}
