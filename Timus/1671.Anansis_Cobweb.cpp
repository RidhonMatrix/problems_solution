#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define endl   '\n'
#define deb(x)       cout << #x << " = " << x << endl
#define deb2(x, y)   cout << #x << " = " << x << "," << #y << "=" << y << endl
int gcd(int a,int b){ return b == 0 ? a : gcd(b, a % b); }

int par[100005];
int sz[100000];

void make_set(int n){
    for(int i = 1; i <= n; ++i){
        par[i] = i;
        sz[i] = 1;
    }
}

int find_set(int i){
    if(par[i] == i) return i;
    return par[i] = find_set(par[i]);
}

void union_set(int a, int b){
    a = find_set(a);
    b = find_set(b);

    if(a != b){
        if(sz[a] > sz[b]) swap(a, b);
        par[a] = b;
        sz[b] +=sz[a];
    }
}

void solve(){
    int n, m; cin >> n >> m;
    make_set(n);
    vector<pair<int, int>> edge(m + 2);
    int a, b;
    for(int i = 1; i <= m; ++i){
        cin >> a >> b;
        edge[i] = {a, b};
    }

    int q; cin >> q;
    vector<int> v(q + 2);
    bool mark[m + 2] = {0}; 
    for(int i = 0; i <= q; ++i){
        cin >> v[i];
        mark[v[i]] = true;
    }

    int total = n;

    for(int i = 1; i <= m; ++i){
        if(!mark[i]){
            int a = edge[i].first;
            int b = edge[i].second;
            if(find_set(a) != find_set(b)) total--;
            union_set(a, b);
        }
    }
    vector<int>ans;
    for(int i = q - 1; i >= 0; --i){
        ans.push_back(total);
        int a = edge[v[i]].first;
        int b = edge[v[i]].second;

        if(find_set(a) != find_set(b)) total--;
        union_set(a, b);
    }
    reverse(ans.begin(), ans.end());
    for(auto x : ans){
        cout<<x<<' ';
    }cout<<endl;


    

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int t;cin>>t;
    //int c = 1;
    //while(t--){
        //cout<<"Case "<<c++<<": ";
        solve();
    //}
    return 0;
}
