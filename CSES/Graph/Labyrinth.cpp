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

int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};

int n,m;

PII s,d;


char a[1001][1001];
bool vis[1001][1001];
int dis[1001][1001];
PII parent[1001][1001];

#define valid(nx,ny) nx>=0 && nx<n && ny>=0 && ny<m and a[nx][ny]!='#'  and vis[nx][ny]==false

void bfs(int x,int y){
    vis[x][y]=true;
    dis[x][y]=0;
    queue<PII>q;
    q.push(PII(x,y));
    while(!q.empty()){
        PII top=q.front();q.pop();
        for(int k=0;k<4;k++){
            x=top.first+fx[k];
            y=top.second+fy[k];

            if(valid(x,y)){
                vis[x][y]=true;
                dis[x][y]=dis[top.first][top.second]+1;
                parent[x][y]=PII(top.first,top.second); //path finding
                q.push(PII(x,y));
                if(a[x][y]=='B') return;
            }
        }
    }
}
void solve(){
    cin>>n>>m;
    memset(vis,false,sizeof(vis));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]=='A'){
                s.first=i; s.second=j;
            }
            else if(a[i][j]=='B'){
                d.first=i;
                d.second=j;
            }
        }
    }


    bfs(s.first,s.second);

    


    if(vis[d.first][d.second]){
        cout<<"YES"<<ln;
        cout<<dis[d.first][d.second]<<ln;

        vector<PII>path;

        int x=d.first;
        int y=d.second;
        path.pb(PII(x,y));
        while(1){
            PII top=parent[x][y];
            path.pb(top);
            x=top.first;
            y=top.second;
            if(a[x][y]=='A') break;
        }

        for(int i=path.size()-1;i>=0;i--){
            
            if(path[i].F+fx[0]==path[i-1].F and path[i].S+fy[0]==path[i-1].S) cout<<"D";
            else if(path[i].F+fx[1]==path[i-1].F and path[i].S+fy[1]==path[i-1].S) cout<<"U";
            else if(path[i].F+fx[2]==path[i-1].F and path[i].S+fy[2]==path[i-1].S) cout<<"R";
            else if(path[i].F+fx[3]==path[i-1].F and path[i].S+fy[3]==path[i-1].S) cout<<"L";
        }
    }else cout<<"NO"<<ln;

    


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
