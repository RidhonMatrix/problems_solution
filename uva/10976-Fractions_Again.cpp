#include<bits/stdc++.h>
using namespace std;

#define F            first
#define S            second  
#define Fin          freopen("input.txt","r",stdin);
#define Fout         freopen("output.txt","w",stdout);
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define for0(n) for (int i = 0; i < (int)(n); ++i)

template <typename T> void Print(const vector<T> &v) {for (int i = 0; i + 1 < v.size() ; i++) cout << v[i] << " ";cout << v.back() << "\n";}
bool isInt(double d){
	if(d==(int)d) return true;
	return false;
}
void solve(int n){
    vector<int>v1,v2;
    double left=0,right=1;
    for(int i=1,j=n+1;left!=right;i++,j++){
    	left=(n*j)/(double)i;
    	right=j;
    	if(isInt(left)){
    		v1.push_back(left);
    		v2.push_back(right);
    	}
    }
    cout<<v1.size()<<'\n';
    for0(v1.size()){
    	printf("1/%d = 1/%d + 1/%d\n",n,v1[i],v2[i]);
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    
    int tc = 1;
    //cin >> tc;
    int n;
    while (cin>>n) {
        //cout << "Case #" << t  << ": ";
        solve(n);
    }
    return 0;
}
