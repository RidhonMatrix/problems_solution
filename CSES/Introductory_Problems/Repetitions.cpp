#include<bits/stdc++.h>
using namespace std;
 
#define F            first
#define S            second  
#define Fin          freopen("input.txt","r",stdin);
#define Fout         freopen("output.txt","w",stdout);
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
#define for0(i, n) for (int i = 0; i < (int)(n); ++i)
 
template <typename T> void Print(const vector<T> &v) {for (int i = 0; i + 1 < v.size() ; i++) cout << v[i] << " ";cout << v.back() << "\n";}
 
void solve(){
    string a;
    cin>>a;
    int max=1;
    int c=1;
    for(int i=1;i<a.size();i++){
    	if(a[i-1]==a[i]) c++;
    	else c=1;
 
    	if(max<c) max=c;
    }
    cout<<max<<"\n";
    
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
