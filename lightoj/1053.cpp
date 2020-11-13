#include<stdio.h>
int main()
{
    int i,n,x,y,z,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d",&x,&y,&z);
        if(x<y && z<y){
            c=y;
            a=x;
            b=z;
        }
        else if(x<z && y<z){
            c=z;
            a=x;
            b=y;
        }
        else if(y<x && z<x){
            c=x;
            a=y;
            b=z;
        }
        if((a*a)+(b*b)==(c*c)){
            printf("Case %d: yes\n",i);
        }
        else{
            printf("Case %d: no\n",i);
        }
    }
}
