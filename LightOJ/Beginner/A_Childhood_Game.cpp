#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    int c=1;
    while(t--){
        int n;
        string str;
        cin>>n>>str;
        printf("Case %d: ",c++);
        if(str=="Bob"){
            if(n%3 != 0) cout<<"Bob\n";
            else cout<<"Alice\n";
        }
        else{
            if(n%3==1) cout<<"Bob\n";
            else cout<<"Alice\n";
        }
    }

}
