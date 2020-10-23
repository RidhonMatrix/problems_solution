#include <stdio.h>
int main()
{
    int n,i;
    int a[52];
    int temp,sum,avg,totalMove,c=1;
    while(scanf("%d",&n) && n!=0){
        sum=0;
        totalMove=0;
        for(i=0;i<n;i++){
            scanf("%d",&temp);
            sum+=temp;
            a[i]=temp;
        }
        avg=sum/n;
        for(i=0;i<n;i++){
            if(avg<a[i]){
                totalMove+=a[i]-avg;
            }
        }
        printf("Set #%d\n",c++);
        printf("The minimum number of moves is %d.\n",totalMove);
        printf("\n");
    }
    return 0;
}
