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

map<string,vector<string>> adjList;
map<string,bool>vis;
map<string,int>dis;
map<string,string> parent;

void bfs(string s,string d){
    string u,v;
    dis[s]=0;
    queue<string>q;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int i=0;i<adjList[u].size();i++){
            v=adjList[u][i];
            if(vis[v]==false){
                vis[v]=true;
                dis[v]=dis[u]+1;
                q.push(v);
                parent[v]=u;
                if(v==d) return;

            }
        }

    }
}

void solve(int n){
    string s1,s2;
    adjList.clear();
    for(int i=0;i<n;i++){
        cin>>s1>>s2;
        adjList[s1].pb(s2);
        adjList[s2].pb(s1);
    }

    vis.clear();
    dis.clear();
    parent.clear();
    cin>>s1>>s2;
    bfs(s1,s2);
    int k=dis[s2];
    if(k){
        vector<string>path;
        string u=s2;
        for(int i=0;i<=k;i++){
            path.pb(u);
            u=parent[u];
        }
        for(int i=k;i>0;i--){
            cout<<path[i]<<" "<<path[i-1]<<ln;
        }

    }else cout<<"No route"<<ln;

}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    
    
    int n;
    int c=1;
    while(cin>>n){
        if(c!=1) cout<<ln;
        c++;
        solve(n);
    }

    return 0;
}
