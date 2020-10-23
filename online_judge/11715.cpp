#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double s,u,v,t,a;
    int c=1;
    while(scanf("%d",&n)){
        if(n==0) break;

        if(n==1){
            scanf("%lf %lf %lf",&u,&v,&t);
            s=0.5*(u+v)*t;
            a=(v-u)/t;
            printf("Case %d: %.3lf %.3lf\n",c++,s,a);
        }
        else if(n==2){
            scanf("%lf %lf %lf",&u,&v,&a);
            s=( (v*v) - (u*u) )/(2*a);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",c++,s,t);
        }
        else if(n==3){
            scanf("%lf %lf %lf",&u,&a,&s);
            v=sqrt((u*u)+(2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",c++,v,t);
        }
        else{
            scanf("%lf %lf %lf",&v,&a,&s);
            u=sqrt((v*v)-(2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",c++,u,t);
        }
    }
    return 0;
}
