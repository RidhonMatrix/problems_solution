bool marked[1005];
bool isPrime(int n){
	if(n<2)  return false;
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
