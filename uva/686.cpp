#include <bits/stdc++.h> 
using namespace std; 
bool marked[32860];
bool isPrime(int n){
	if(n<2) return false;
	if(n==2) return true;
	if(n%2==0) return false;
	return marked[n]==false;
}
void sieve(int n){
	for(int i=3;i*i<=n;i+=2){
		if(marked[i]==false){
			for(int j=i*i;j<=n;j+=i+i){
				marked[j]=true;
			}
		}
	}
}
void solve(int n){
	int count=0;
	for(int i=n/2;i<=n;i++){

		if( isPrime(n-i) && isPrime(i) ){
			count++;
		}
	}
	cout<<count<<endl;
	
}

int main()
{
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	int n;
	memset(marked,false,sizeof(marked));
	sieve(32860);
	while(cin>>n && n!=0){
		solve(n);
	}
	

}


