#include<bits/stdc++.h>
using namespace std;

#define F            first
#define S            second  
#define Fin          freopen("input.txt","r",stdin);
#define Fout         freopen("output.txt","w",stdout);
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define for0(i, n) for (int i = 0; i < (int)(n); ++i)

template <typename T> void Print(const vector<T> &v) {for (int i = 0; i + 1 < v.size() ; i++) cout << v[i] << " ";cout << v.back() << "\n";}
int n,e;
vector<int>edge[1000];
bool vis[1000];

void dfs(int v){
    vis[v]=true;

    for(int child:edge[v]){
        if(!vis[child])
            dfs(child);
    }
}

void solve(){
    int n,e;
    cin>>n>>e;
    int u,v;
    while(e--){
        cin>>u>>v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    memset(vis,false,sizeof(vis));
    int count=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            count++;
            dfs(i);
        }
    }
    cout<<count<<'\n';
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    
    int tc = 1;
    //cin >> tc;
    for (int t = 1; t <= tc; t++) {
        //cout << "Case #" << t  << ": ";
        solve();
    }
    return 0;
}
