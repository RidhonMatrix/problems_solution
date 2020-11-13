#include<stdio.h>
int main()
{
    int t;scanf("%d",&t);
    int bDay,bMonth,bYear;
    int cDay,cMonth,cYear;
    char temp1,temp2;
    int c=1;
    int ans;
    while(t--){
        scanf("%d %c %d %c %d",&cDay,&temp1,&cMonth,&temp2,&cYear);
        scanf("%d %c %d %c %d",&bDay,&temp1,&bMonth,&temp2,&bYear);
        printf("Case #%d: ",c++);

        if(bYear>cYear || (bYear==cYear && bMonth>cMonth) || (bYear==cYear && bMonth==cMonth && bDay>cDay) )    printf("Invalid birth date\n");
        else if(cYear-bYear==0){
            printf("0\n");
        }
        else{
            ans=cYear-bYear;
            if(bMonth>cMonth) ans--;
            else if(bMonth==cMonth && bDay>cDay) ans--;


            if(ans>130){
                printf("Check birth date\n");
            }
            else{
                printf("%d\n",ans);
            }
        }


    }
    return 0;
}
