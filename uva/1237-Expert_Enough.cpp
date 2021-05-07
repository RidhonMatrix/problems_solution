#include<bits/stdc++.h>
using namespace std;

#define F            first
#define S            second  
#define Fin          freopen("input.txt","r",stdin);
#define Fout         freopen("output.txt","w",stdout);
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define for0(n) for (int i = 0; i < (int)(n); ++i)

template <typename T> void Print(const vector<T> &v) {for (int i = 0; i + 1 < v.size() ; i++) cout << v[i] << " ";cout << v.back() << "\n";}

void solve(){
	int n;cin>>n;
	string company[n+2];
	int low[n+2];
	int high[n+2];
	for0(n){
		cin>>company[i]>>high[i]>>low[i];
	}
	int q;cin>>q;
	for0(q){
		int p;cin>>p;
		int count=0;
		string ansStr;
		for(int j=0;j<n;j++){
			if(low[j]>=p && high[j]<=p){
				ansStr=company[j];
				count++;
			}
		}
		if(count==1) cout<<ansStr<<'\n';
		else cout<<"UNDETERMINED"<<'\n';
	}
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
        if(t!=tc) cout<<'\n';
    }
    return 0;
}
