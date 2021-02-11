#include <bits/stdc++.h>
using namespace std;
long long int ackermann(long long int n,long long int c){
    if(n==1) return c;
    if(n%2==0) n/=2;
    else n=(n*3)+1;
    c++;
    return ackermann(n,c);
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    long long int l,h;
    while(cin>>l>>h && l!=0 && h!=0){
        if(l>h) swap(l,h);
        long long int max=0;
        long long int s;
        for(int i=l;i<=h;i++){
            if(i==1){
                if(max<3){
                    max=3;
                    s=i;
                    continue;
                }
            }
            long long int temp=ackermann(i,0);
            if(max<temp){
                max=temp;
                s=i;
            }
        }
        printf("Between %d and %d, %d generates the longest sequence of %d values.\n",l,h,s,max);
    }
}
