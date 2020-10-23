//#include<stdio.h>
//int main()
//{
//    long int n;
//    long int ans;
//    while(scanf("%ld",&n) && n>=0){
//        ans=(n*(n+1))/2;
//        printf("%ld\n",ans+1);
//    }
//    return 0;
//}


#include<stdio.h>
int main()
{
    long int n;
    long int count,d,sum,i;
    while(scanf("%ld",&n) && n>=0){                 //
        count=0;
        d=1;
        for(i=0;i<=n;i++){
            sum=count+d;
            count++;
            d=sum;
        }
        printf("%ld\n",sum);
    }
    return 0;
}
