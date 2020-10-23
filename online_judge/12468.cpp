#include<stdio.h>
int main()
{
    int a,b,i,j;
    int shorta,shortb;
    while(1){
        scanf("%d %d",&a,&b);
        if(a<0 && b<0) break;
        shorta=0;
        shortb=0;
        i=a;
        if(a==b){
            printf("0\n");
            continue;
        }
        while(1){
            if(i==0){
                i=99;
                shorta++;
            }
            else{
                i--;
                shorta++;
            }

            if(i==b){
                break;
            }
        }
        i=a;
        while(1){
            if(i==99){
                i=0;
                shortb++;
            }
            else{
                i++;
                shortb++;
            }

            if(i==b){
                break;
            }
        }

        if(shorta<shortb) printf("%d\n",shorta);
        else printf("%d\n",shortb);
    }
    return 0;
}
