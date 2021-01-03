#include <bits/stdc++.h>
using namespace std;
int calc(int a,int b,int c,int d,int i){
	return (a*pow(i,2))+(b*i)+c;
}
void solve(int a,int b,int c,int d,int l){
	int count=0;
	for(int i=0;i<=l;i++){
		int temp=calc(a,b,c,d,i);
		if(temp%d==0) count++;
	}
	cout<<count<<endl;
}
int main()
{
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	int a,b,c,d,l;
	while(cin>>a>>b>>c>>d>>l){
		if(a==0 && b==0 && c==0 && d==0 && l==0) break;
		solve(a,b,c,d,l);
	}
	return 0;
}
