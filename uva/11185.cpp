#include<stdio.h>
void ternary(int n)
{
    if(n==0) return;
    ternary(n/3);
    printf("%d",n%3);
}
int main()
{
    long int n;
    while(scanf("%ld",&n) && n>=0){
        if(n!=0) ternary(n);
        else printf("0");
        printf("\n");

    }
    return 0;
}
