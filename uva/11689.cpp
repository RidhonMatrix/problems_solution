#include <bits/stdc++.h>
using namespace std;
int calc(int n,int c){
	int sum=0;
	while(n>=c){
		int temp=n/c;
		sum+=temp;
		temp+=n%c;
		n=temp;
	}
	return sum;
}
void solve(){
	int e,f,c;
	cin>>e>>f>>c;
	int n=e+f;
	int ans=calc(n,c);
	cout<<ans<<endl;
}
int main()
{
	//freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	int n;
	int t;cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
