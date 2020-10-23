#include<stdio.h>
int main()
{
    long int x,y;
    int carry;
    int count;
    int a,b;
    while(1){
        scanf("%ld %ld",&x,&y);
        if(x==0 && y==0) break;
        carry=0;
        count=0;
        while(1){
            if(x==0 && y==0) break;
            if( (x%10+y%10+carry)>9 ){
                carry=1;
                count++;
            }
            else carry=0;
            x/=10;
            y/=10;
        }
        if(count==0) printf("No carry operation.\n");
        else if(count==1) printf("1 carry operation.\n");
        else printf("%d carry operations.\n",count);
    }
    return 0;
}
