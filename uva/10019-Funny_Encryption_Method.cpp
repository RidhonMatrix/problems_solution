#include<bits/stdc++.h>
using namespace std;
int decimalBinaryCount(int n){
    int c=0;
    while(n>0){
        if(n%2) c++;
        n/=2;
    }
    return c;
}
int hexaBinaryCount(int n){
    int c=0;
    while(n){
        c+=decimalBinaryCount(n%10);
        n/=10;
    }
    return c;
}
int main()
{
    int t;cin>>t;
    int n;
    while(t--){
        cin>>n;
        cout<<decimalBinaryCount(n)<<" "<<hexaBinaryCount(n)<<endl;
    }
}
