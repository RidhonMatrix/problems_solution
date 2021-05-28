/***
**    Author: Rejaul Karim Ridhon
***/
#include<bits/stdc++.h>
using namespace std;

#define ll           long long

#define pb           push_back
#define pob          pop_back
#define pii          pair<int,int>

#define F            first
#define S            second
#define deb(x)       cout << #x << "=" << x << endl
#define deb2(x, y)   cout << #x << "=" << x << "," << #y << "=" << y << endl
#define Fin          freopen("input.txt","r",stdin);
#define Fout         freopen("output.txt","w",stdout);
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define for0(i,n) for (int i = 0; i < (int)(n); ++i)

template <typename T> void Print(T ar[] , int n) {for (int i = 0; i + 1 < n; i++)cout << ar[i] << " ";cout << ar[n - 1] << "\n";}
template <typename T> void Print(const vector<T> &v) {for (int i = 0; i + 1 < v.size() ; i++) cout << v[i] << " ";cout << v.back() << "\n";}

int fx[]= {0, 0,1, 1,-1,-1,1,-1}; // 8 direction
int fy[]= {1,-1,1,-1, 1,-1,0, 0};

int n,m;
bool vis[101][101];
char a[105][105];
#define valid(x,y) x>=0 && x<n && y>=0 && y<m



void bfs(int x,int y){
    vis[x][y]=true;
    queue<pii>q;
    q.push(pii(x,y));
    while(!q.empty()){
        pii top=q.front();q.pop();
        for(int k=0;k<8;k++){
            x=top.first+fx[k];
            y=top.second+fy[k];
            if(valid(x,y)){
                vis[x][y]=true;
                q.push(pii(x,y));
            }
        }
    }
}
bool check(int i,int j){
    for(int k=0;k<8;k++){
        int x=i+fx[k];
        int y=j+fy[k];
        if(valid(x,y)){
            if(a[x][y]=='*') return false;
        }
    }
    return true;
}
void solve(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='*'){
                if(check(i,j)) count++;
            }
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
    // cin >> tc;
    while(1){
        cin>>n>>m;
        if(n==0 && m==0) break;
        solve();
    }
    return 0;
}

