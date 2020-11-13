#include<stdio.h>
int main()
{
    int t;scanf("%d",&t);
    int a[1002];
    int n,sum,temp,c,i;
    double avg,totalAvg;
    while(t--){
        scanf("%d",&n);
        sum=0;
        for(i=0;i<n;i++){
            scanf("%d",&temp);
            sum+=temp;
            a[i]=temp;
        }
        avg=(double)sum/n;
        c=0;
        for(i=0;i<n;i++){
            if(a[i]>avg){
                c=c+1;
            }
        }
        printf("%.3lf%%\n",((double)c/n)*100);
    }
    return 0;

}
