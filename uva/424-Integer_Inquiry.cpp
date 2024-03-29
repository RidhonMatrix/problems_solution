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
#define IOS          ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl         '\n'
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


void solve(){
    string str[101];
    int n=0;
    int max1=-1;
    while(cin>>str[n] && str[n]!="0"){
        // max1=max(max1,str[n].size());
        if(max1<(int)str[n].size()) max1=str[n].size();
        ++n;
    }
    ll carry=0;
    ll sum=0;
    VI v;
    for(int i=0;i<max1;i++){
        sum+=carry;
        for(int j=0;j<n;j++){
            sum+= ((int)str[j].size()-1)-i < 0 ? 0 : str[j][((int)str[j].size()-1)-i]-'0';
        }
        v.pb(sum%10);
        sum=sum/10;
        carry=sum;
        sum=0;
    }
    v.pb(carry);
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i];
    }
    cout<<endl;


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
        //cout << "Case " << t  << ": ";
        solve();
    }
    return 0;
}


