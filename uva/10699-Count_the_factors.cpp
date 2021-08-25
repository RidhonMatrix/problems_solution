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

#define for0(n) for (int i = 0; i < (int)(n); ++i)

template<class T> T MIN3(T a,T b,T c) {return min(a,min(b,c));} /// minimum of 3 number
template<class T> T MAX3(T a,T b,T c) {return max(a,max(b,c));} ///maximum of 3 number
template <typename T> void Print(T ar[] , int n) {for (int i = 0; i + 1 < n; i++)cout << ar[i] << " ";cout << ar[n - 1] << "\n";}
template <typename T> void Print(const vector<T> &v) {for (int i = 0; i + 1 < v.size() ; i++) cout << v[i] << " ";cout << v.back() << "\n";}

const int N=4e3;

bool marked[N];

bool isPrime(int n){
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    return marked[n]==false;
}
vector<ll>p;
void sieve(int n){
    for(int i=3;i*i<=n;i+=2){
        if(marked[i]==false){
            for(int j=i*i;j<=n;j+=i+i){
                marked[j]=true;
            }
        }
    }
}

void solve(int n){
    int cnt=0;
    int num=n;
    for(int i=0;i<p.size() && p[i]*p[i]<=n;i++){
        if(n%p[i]==0){
            while(n%p[i]==0){
                n/=p[i];
            }
            cnt++;
        }
    }
    if(n>1) cnt++;

    cout<<num<<" : "<<cnt<<"\n";
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif

    sieve(N);
    for(int i=2;i<N;i++){
        if(isPrime(i)) p.push_back(i);
    }

    int n;
    while(cin>>n && n!=0){
        solve(n);
    }
    return 0;
}
