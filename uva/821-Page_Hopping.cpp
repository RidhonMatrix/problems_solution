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

#define INF 200

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    
    int u,v;
    int count=1;
    while(cin>>u>>v && u!=0 && v!=0){
        int x,y;
        int a[105][105];

        for(int i=1;i<=100;i++){
            for(int j=1;j<=100;j++){
                a[i][j] = (i == j) ? 0 : INF;
            }
        }
        
        x=u;
        y=v;

        a[x][y]=1;

        while(cin>>x>>y && x!=0 && y!=0){
            a[x][y]=1;
        }


        //floyd warshall
        for(int k=1;k<=100;k++){
            for(int i=1;i<=100;i++){
                for(int j=1;j<=100;j++){
                    a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
                }
            }
        }


        // cout<<ln;
        // for(int i=1;i<=10;i++){
        //     for(int j=1;j<=10;j++){
        //         if(a[i][j]>100) cout<<"inf"<<" ";
        //         else cout<<a[i][j]<<" ";
        //     }
        //     cout<<ln;
        // }
        // cout<<ln;



        int sum=0;
        int c=0;
        for(int i=1;i<=100;i++){
            for(int j=1;j<=100;j++){
                if(a[i][j]<=100 && a[i][j]!=0){
                    sum+=a[i][j];
                    c++;
                }
            }
        }
        printf("Case %d: average length between pages = %.3lf clicks\n",count++,(double)sum/c);

    }
    
    return 0;
}
