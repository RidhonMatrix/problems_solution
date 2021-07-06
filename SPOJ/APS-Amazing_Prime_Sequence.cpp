/***
**    Author: Rejaul Karim Ridhon
***/
#include<bits/stdc++.h>
using namespace std;
 
#define ll           long long
 
#define pb           push_back
#define pob          pop_back
 
#define F            first
#define S            second
#define deb(x)       cout << #x << "=" << x << endl
#define deb2(x, y)   cout << #x << "=" << x << "," << #y << "=" << y << endl
#define Fin          freopen("input.txt","r",stdin);
#define Fout         freopen("output.txt","w",stdout);
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
#define for0(n) for (int i = 0; i < (int)(n); ++i)
 
template <typename T> void Print(T ar[] , int n) {for (int i = 0; i + 1 < n; i++)cout << ar[i] << " ";cout << ar[n - 1] << "\n";}
template <typename T> void Print(const vector<T> &v) {for (int i = 0; i + 1 < v.size() ; i++) cout << v[i] << " ";cout << v.back() << "\n";}
ll ar[10000001];
ll a[10000001];
void sieve(){
    for(ll i=2;i<10000001;i++){
        if(ar[i]==0){
            ar[i]=i;
            for(ll j=i*i;j<10000001;j+=i){
                if(ar[j]==0) ar[j]=i;
            }
        }
        a[i]=a[i-1]+ar[i];
    }
}
void solve(){
    ll n;
    scanf("%lld",&n);
    printf("%lld\n",a[n]);
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    sieve();
    int tc = 1;
    scanf("%d",&tc);
    for (int t = 1; t <= tc; t++) {
        //cout << "Case #" << t  << ": ";
        solve();
    }
    return 0;
}
 
