#include<stdio.h>
int a,b,c;
void sort()
{
    int temp;
    if(a>b){
        if(a>c){
            temp=a;
            a=c;
            c=temp;
        }
    }
    else if(b>a){
        if(b>c){
            temp=b;
            b=c;
            c=temp;
        }
    }
}
int main()
{
    while(1)
    {
        scanf("%d %d %d",&a,&b,&c);
        sort();
        if(a==0 && b==0 && c==0) break;

        if( (a*a)+(b*b)==c*c ) printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}
