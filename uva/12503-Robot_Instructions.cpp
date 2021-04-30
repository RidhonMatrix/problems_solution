#include<bits/stdc++.h>
using namespace std;
void solution(){
    int index[108];
    int n;cin>>n;
    string s;
    int p=0;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s[0]=='L'){
            index[i]=-1;
            p--;
        }
        else if(s[0]=='R'){
            index[i]=1;
            p++;
        }
        else if(s[0]=='S'){
            string as;cin>>as;
            int digit;cin>>digit;
            index[i]=index[digit-1];
            p+=index[i];
        }
    }
    cout<<p<<endl;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t;cin>>t;
    while(t--){
        solution();
    }
}
