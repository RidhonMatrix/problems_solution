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
 
#define Max 200005
ll ST[24][Max];
ll A[Max];
 
void computeST(int N){
    for(int i=0;i<N;i++) ST[0][i]=i;
    for(int k=1;(1<<k)<N;k++){
        for(int i=0;i+(1<<k)<=N;i++){
            ll x=ST[k-1][i];
            ll y=ST[k-1][i+(1<<k-1)];
            ST[k][i] = A[x] <= A[y] ? x : y;
        }
    }
}
 
int RMQ(int i, int j){
    int k = log2(j-i);
    int x = ST[k][i];
    int y = ST[k][j-(1<<k)+1];
 
    return A[x] <= A[y] ? x: y;
}
 
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++) cin>>A[i];
 
    computeST(n);
    int x,y;
    while(q--){
        cin>>x>>y;
        if(x==y) cout<<A[x-1]<<endl;
        else cout<<A[RMQ(x-1,y-1)]<<endl;
    }
 
    
}
