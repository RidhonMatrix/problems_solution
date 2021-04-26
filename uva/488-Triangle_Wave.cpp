#include<bits/stdc++.h>
using namespace std;
void wave(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<i;
        }
        cout<<endl;
    }
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t;cin>>t;
    for(int i=1;i<=t;i++){
         int a,f;
         cin>>a>>f;
         for(int j=1;j<=f;j++){
            wave(a);
            if(j!=f){
                cout<<endl;
            }
         }
         if(i!=t){
            cout<<endl;
         }
    }

}
