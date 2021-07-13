#include<bits/stdc++.h>
using namespace std;

#define F            first
#define S            second  
#define Fin          freopen("input.txt","r",stdin);
#define Fout         freopen("output.txt","w",stdout);
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define for0(i, n) for (int i = 0; i < (int)(n); ++i)

template <typename T> void Print(const vector<T> &v) {for (int i = 0; i + 1 < v.size() ; i++) cout << v[i] << " ";cout << v.back() << "\n";}

vector<int>edge[100];
bool vis[100];

void dfs(int v){
  vis[v] = true;
  for(int i = 0; i < edge[v].size(); i++){
    int child = edge[v][i];
    if(vis[child] == false)
      dfs(child);
  }
}

void solve(){
    int u,v;
    int node,edges;
    cin>>node>>edges;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    dfs(1);
    bool flag=true;
    for(int i=1;i<=node;i++){
        if(vis[i]==false) flag=false;
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
    cout<<'\n';

    memset(vis,false,sizeof vis);
    memset(edge,0,sizeof edge);
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        //cout << "Case #" << t  << ": ";
        solve();
    }
    return 0;
}
