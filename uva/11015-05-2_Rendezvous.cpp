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

#define INF 1e6

void solve(int n,int e){
    string s;
    map<int,string>mymap;
    int a[n+5][n+5];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j] = (i == j) ? 0 : INF;
        }
    }

    int c=1;
    for(int i=0;i<n;i++){
        cin>>s;
        mymap[c++]=s;
    }
    int x,y,cost;
    for(int i=0;i<e;i++){
        cin>>x>>y>>cost;
        a[x][y]=cost;
        a[y][x]=cost;
    }



    //floyd warshall
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                a[i][j] = min(a[i][j],a[i][k]+a[k][j]);
            }
        }
    }

    int minCost=INT_MAX;
    int ans=-1;

    int sum;
    for(int i=1;i<=n;i++){
        sum=0;
        for(int j=1;j<=n;j++){
            if(a[i][j]<INF) sum+=a[i][j];
        }
        if(minCost>sum){
            ans=i;
            minCost=sum;
        }
    }


    cout<<mymap[ans]<<ln;




    // cout<<ln;
    //     for(int i=1;i<=n;i++){
    //         for(int j=1;j<=n;j++){
    //             if(a[i][j]>100) cout<<"i"<<" ";
    //             else cout<<a[i][j]<<" ";
    //         }
    //         cout<<ln;
    //     }
    // cout<<ln;




}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    
    int n,e;
    int c=1;
    while(cin>>n>>e && n!=0){
        printf("Case #%d : ",c++);
        solve(n,e);
    }
    return 0;
}
