#include<stdio.h>
int main()
{
    long int n;
    long int ans;
    while(scanf("%ld",&n) && n!=0){
        if(n<=101){
            ans=91;
        }
        else{
            ans=n-10;
        }
        printf("f91(%ld) = %ld\n",n,ans);
    }
    return 0;
}
