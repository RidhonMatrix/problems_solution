#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    int count;
    int i;
    int temp;
    while(1){
        scanf("%d %d",&a,&b);
        count=0;
        if(a==0 && b==0) break;

        for(i=a;i<=b;i++){
            temp=sqrt(i);
            if(i==1 || (temp*temp)==i){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

