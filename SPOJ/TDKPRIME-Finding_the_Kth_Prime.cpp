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

bool marked[90000001];
bool isPrime(int n){
    if(n<2)  return false;
    if(n==2) return true;
    if(n%2==0) return false;
    return marked[n]==false;
}
void sieve(long long n){
    for(int i=3;i*i<=n;i+=2){
        if(marked[i]==false){
            for(int j=i*i;j<=n;j+=i+i){
                marked[j]=true;
            }
        }
    }
}

void solve(){
    sieve(90000000);
    vector<int>p;
    for(int i=0,j=0;i<90000001;i++){
        if(isPrime(i)){
            p.pb(i);
        }
    }
    int q;
    cin>>q;
    while(q--){
        int temp;
        cin>>temp;
        cout<<p[temp-1]<<'\n';
    }
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
