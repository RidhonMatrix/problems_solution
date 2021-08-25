
//O(sqrt(N))
void primeFact(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int cnt=0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            cout<<i<< "^" <<cnt<<'\n';
        }
    }
    if(n>1)
        cout<<n<<"^"<<1<<'\n';
}

//using sieve O(log(n)
for(int i=0;i<p.size() && p[i]*p[i]<=n;i++){
    if(n%p[i]==0){
        while(n%prime[i]==0){
            n/=prime[i];
        }
        factor.push_back(p[i]);
    }
}
if(n>1) factor.push_back(n);

