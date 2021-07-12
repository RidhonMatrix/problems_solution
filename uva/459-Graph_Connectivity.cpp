#include<bits/stdc++.h>
using namespace std;

#define F            first
#define S            second  
#define Fin          freopen("input.txt","r",stdin);
#define Fout         freopen("output.txt","w",stdout);
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define for0(i, n) for (int i = 0; i < (int)(n); ++i)

template <typename T> void Print(const vector<T> &v) {for (int i = 0; i + 1 < v.size() ; i++) cout << v[i] << " ";cout << v.back() << "\n";}

bool vis[100];
vector<int>vec[100];

void dfs(int v){
    vis[v]=true;
    for(int child:vec[v]){
        if(!vis[child]){
            dfs(child);
        }
    }
}
void solve(){
    string s;
    int u,v;

    string ch;cin>>ch;
    int max=ch[0]-65;

    getline(cin,s);

    while(getline(cin,s)){
        if(s.size()==0) break;

        u=s[0]-65;
        v=s[1]-65;

        vec[u].push_back(v);
        vec[v].push_back(u);
    }
    
    memset(vis,false,sizeof(vis));
    int count=0;
    for(int i=0;i<=max;i++){
        if(vis[i]==false){
            count++;
            dfs(i);
        }
    }
    cout<<count<<'\n';
    memset(vec,0,sizeof(vec));

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
        if(t!=tc) cout<<'\n';
    }
    return 0;
}
