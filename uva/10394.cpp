#include <bits/stdc++.h> 
using namespace std; 
bool marked[20000000];
vector<pair<int ,int >> prime;
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
void calc(){
	for(int i=3;i<20000000;i+=2){
		if(isPrime(i) && isPrime(i+2)){
			prime.push_back(make_pair(i,i+2));
		}
	}
}
int main()
{
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	int n;
	memset(marked,false,sizeof(marked));
	sieve(20000000);
	calc();
	while(cin>>n){
		n=n-1;
		printf("(%d, %d)\n",prime[n].first,prime[n].second);
	}
	

}


