#include <bits/stdc++.h> 
using namespace std; 
bool marked[1000001];
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
	

	for(int i=n-1;i>=0;i--){
		if( isPrime(n-i) && isPrime(i) && n-i!=2){
			printf("%d = %d + %d\n",n,n-i,i);
			return;
		}
	}
	printf("Goldbach's conjecture is wrong.\n");
	return;
}

int main()
{
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	int n;
	memset(marked,false,sizeof(marked));
	sieve(1000000);
	while(cin>>n && n!=0){
		solve(n);
	}
	
}
