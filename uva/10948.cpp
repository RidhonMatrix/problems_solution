#include <bits/stdc++.h> 
using namespace std; 
bool marked[1000001];

void sieve(int n){
	for(int i=3;i*i<=n;i+=2){
		if(marked[i]==false){
			for(int j=i*i;j<=n;j+=i+i){
				marked[j]=true;
			}
		}
	}
}
bool isPrime(int n){
	if(n<2) return false;
	if(n==2) return true;
	if(n%2==0) return false;
	return marked[n]==false;
}
void solve(int n){
	printf("%d:\n",n);
	int t=n/2;
	for(int i=n-1;i>=t;i--){
		if(isPrime(n-i) && isPrime(i)){
			printf("%d+%d\n",n-i,i);
			return;
		}
	}
	printf("NO WAY!\n");
}


int main()
{
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	memset(marked,false,sizeof(marked));
	sieve(1000000);
	int n;
	while(cin>>n && n!=0){
		solve(n);
	}
	

}


