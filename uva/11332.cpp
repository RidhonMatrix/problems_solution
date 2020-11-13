#include<stdio.h>
int check(long int n)
{
    int sum;
    while(1){
        if(n<10){
            return n;
        }
        else{
            sum=0;
            while(n!=0){
                sum+=n%10;
                n/=10;
            }
            n=sum;
        }
    }
}
int main()
{
    long int n;
    while(1){
          scanf("%ld",&n);
          if(n==0) break;
          printf("%d\n",check(n));
    }
    return 0;
}
