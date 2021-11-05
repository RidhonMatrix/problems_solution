/***
**    Author: Rejaul Karim Ridhon
***/
#include<bits/stdc++.h>
using namespace std;

#define ll           long long
#define pb           push_back
#define pob          pop_back

/**Define memory set function**/
#define mem(x,y) memset(x,y,sizeof(x))
#define CLEAR(x) memset(x,0,sizeof(x))

#define F            first
#define S            second
#define deb(x)       cout << #x << "=" << x << endl
#define deb2(x, y)   cout << #x << "=" << x << "," << #y << "=" << y << endl
#define Fin          freopen("input.txt","r",stdin);
#define Fout         freopen("output.txt","w",stdout);
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ln           '\n'
#define for0(n) for (int i = 0; i < (int)(n); ++i)

template<class T> T MIN3(T a,T b,T c) {return min(a,min(b,c));} /// minimum of 3 number
template<class T> T MAX3(T a,T b,T c) {return max(a,max(b,c));} ///maximum of 3 number
template <typename T> void Print(T ar[] , int n) {for (int i = 0; i + 1 < n; i++)cout << ar[i] << " ";cout << ar[n - 1] << "\n";}
template <typename T> void Print(const vector<T> &v) {for (int i = 0; i + 1 < v.size() ; i++) cout << v[i] << " ";cout << v.back() << "\n";}

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;

int n,m;
VI edge[100005];
bool vis[100005];
int dis[100005];
int parent[100005];

void bfs(int s){
    int u,v;
    dis[s]=0;
    queue<int> q;
    q.push(s);
    vis[s]=true;
    while(!q.empty()){
        u=q.front();q.pop();

        for(int i=0;i<edge[u].size();i++){
            int v=edge[u][i];
            if(!vis[v]){
                parent[v]=u;
                vis[v]=true;
                q.push(v);
                dis[v]=dis[u]+1;
                if(v==n) return;
            }
        }
    }
}

void solve(){
    cin>>n>>m;
    int x,y;
    memset(vis,false,sizeof(vis));
    for0(m){
        cin>>x>>y;
        edge[x].pb(y);
        edge[y].pb(x);
    }
    bfs(1);
    VI path;
    if(dis[n]!=0){        
        cout<<dis[n]+1<<ln;
        int temp=n;
        while(1){
            path.pb(temp);
            temp=parent[temp];
            if(temp==1) break;
        }
        path.pb(1);
        for(int i=path.size()-1;i>0;i--){
            cout<<path[i]<<" ";
        }
        cout<<path[0]<<ln;
    }else cout<<"IMPOSSIBLE"<<ln;
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
