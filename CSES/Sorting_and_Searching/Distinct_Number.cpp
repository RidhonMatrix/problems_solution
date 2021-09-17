#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt","w",stdout);
    int n;cin>>n;
    set<int>s;
    int temp;
    while(n--){
        cin>>temp;
        s.insert(temp);
    }
    cout<<s.size()<<endl;
}
