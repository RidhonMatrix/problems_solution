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

void solve(){
    int n;cin>>n;
    vector<int>minus,plus,zero;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp<0) minus.pb(temp);
        else if(temp>0) plus.pb(temp);
        else zero.pb(temp);
    }
    if(plus.size()==0){
        plus.pb(minus.back());
        minus.pop_back();
        plus.pb(minus.back());
        minus.pop_back();
    }
    if(minus.size()%2==0){
        zero.pb(minus.back());
        minus.pop_back();
    }
    cout<<minus.size()<<" ";
    Print(minus);
    cout<<plus.size()<<" ";
    Print(plus);
    cout<<zero.size()<<" ";
    Print(zero);
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
