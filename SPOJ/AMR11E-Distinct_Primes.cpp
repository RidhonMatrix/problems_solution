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
 
bool primeFact(int n){
    vector<int>p;
    int c=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            ++c;
            if(c==3) return true;
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n>1) ++c;
    if(c==3) return true;
    return false;
}
 
 
void solve(){
    int n;
    cin>>n;
    int c=0;
    int i;
    for(i=1;;i++){
        if(primeFact(i)){
            ++c;
        }
        if(c==n) break;
    }
    cout<<i<<endl;
 
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        //cout << "Case #" << t  << ": ";
        solve();
    }
    return 0;
} 
