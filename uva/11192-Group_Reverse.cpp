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
void print(int i,int k,int c,string s){
    if(c==k) return;
    cout<<s[i];
    print(i-1,k,++c,s);
}
void rec(int i,int k,int n,string s){
    if(i==n) return;
    if((i+1)%k==0 && (i+1)>=k){
        print(i,k,0,s);
    }

    rec(i+1,k,n,s);
}

void solve(int g,string s){
    int n=s.size();
    int k=n/g;
    rec(0,k,n,s);
    cout<<'\n';
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    
    int g;
    string s;
    while(cin>>g>>s){
        if(g==0) break;
        solve(g,s);
    }
    return 0;
}
