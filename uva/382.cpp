#include <bits/stdc++.h>
using namespace std;
int solve(int n){
	int m=n/2;
	int sum=0;
	for(int i=1;i<=m;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	return sum;
}
int main()
{
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	int n;
	printf("PERFECTION OUTPUT\n");
	while(cin>>n && n!=0){
		int temp=solve(n);
		cout <<right << setw(5)<<n<<"  ";
		if(temp==n){
			printf("PERFECT\n");
		}
		else if(temp>n){
			printf("ABUNDANT\n");
		}
		else{
			printf("DEFICIENT\n");
		}
	}
	printf("END OF OUTPUT\n");
	return 0;
}
