#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c){
        if(a==b && b==c && c==a) cout<<'*'<<endl;
        else if(a==b && a!=c) cout<<'C'<<endl;
        else if(a==c && b!=a) cout<<'B'<<endl;
        else cout<<'A'<<endl;
    }
    return 0;
}
