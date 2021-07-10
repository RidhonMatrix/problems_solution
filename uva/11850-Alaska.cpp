#include<bits/stdc++.h>
using namespace std;

#define F            first
#define S            second  
#define Fin          freopen("input.txt","r",stdin);
#define Fout         freopen("output.txt","w",stdout);
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define for0(i, n) for (int i = 0; i < (int)(n); ++i)

template <typename T> void Print(const vector<T> &v) {for (int i = 0; i + 1 < v.size() ; i++) cout << v[i] << " ";cout << v.back() << "\n";}

void solve(int n){
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(abs(a[i]-a[i+1])>200){
            flag=false;
            break;
        }
    }
    if(flag && ((1422-a[n-1])*2)<=200 ) cout<<"POSSIBLE"<<'\n';
    else cout<<"IMPOSSIBLE"<<'\n';
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    
    int n;
    while(cin>>n && n!=0) solve(n);
    return 0;
}
