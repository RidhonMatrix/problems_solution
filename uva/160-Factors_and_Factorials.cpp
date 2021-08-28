/***
**    Author: Rejaul Karim Ridhon
***/
#include<bits/stdc++.h>
using namespace std;

#define ll           long long

#define pb           push_back
#define pob          pop_back

/**Define memory set function**/
#define mem(x,y) memset(x,y,sizeof(x))
#define CLEAR(x) memset(x,0,sizeof(x))

#define F            first
#define S            second
#define deb(x)       cout << #x << "=" << x << endl
#define deb2(x, y)   cout << #x << "=" << x << "," << #y << "=" << y << endl
#define Fin          freopen("input.txt","r",stdin);
#define Fout         freopen("output.txt","w",stdout);
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define for0(n) for (int i = 0; i < (int)(n); ++i)

template<class T> T MIN3(T a,T b,T c) {return min(a,min(b,c));} /// minimum of 3 number
template<class T> T MAX3(T a,T b,T c) {return max(a,max(b,c));} ///maximum of 3 number
template <typename T> void Print(T ar[] , int n) {for (int i = 0; i + 1 < n; i++)cout << ar[i] << " ";cout << ar[n - 1] << "\n";}
template <typename T> void Print(const vector<T> &v) {for (int i = 0; i + 1 < v.size() ; i++) cout << v[i] << " ";cout << v.back() << "\n";}

const int N=101;
bool marked[N];
bool isPrime(int n){
	if(n<2)  return false;
	if(n==2) return true;
	if(n%2==0) return false;
	return marked[n]==false;
}
vector<int>p;
map<int,int>primeMap;
int fact[101][101];
void sieve(int n){
	for(int i=3;i*i<=n;i+=2){
		if(marked[i]==false){
			for(int j=i*i;j<=n;j+=i+i){
				marked[j]=true;
			}
		}
	}
}
void preCal(){
    memset(fact,0,sizeof(fact));
    fact[2][2]=1;
    for(int i=3;i<=100;i++){
        int n=i;
        for(int j=0;j<p.size() && p[j]*p[j]<=n;j++){
            if(n%p[j]==0){
                while(n%p[j]==0){
                    fact[i][p[j]]++;
                    n/=p[j];
                }
            }
        }
        if(n>1) fact[i][n]++;

        for(int k=0;k<=100;k++){
            fact[i][k]+=fact[i-1][k];
        }
    }
}

void solve(int n){
    cout<<setw(3)<<right<<n<<"! =";
    int count=1;
    vector<int>ans;
    for(int i=0;i<=100;i++){
        if(fact[n][i]!=0){
            ans.pb(fact[n][i]);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<" "<<setw(2);
        cout<<ans[i];
        if(i==14 && ans.size()>15){
            cout<<'\n';
            cout<<"      ";
        }
    }
    cout<<'\n';

}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif

    sieve(100);
    for(int i=2,j=0;i<N;i++){
        if(isPrime(i)){
           primeMap[i]=j;
           j++;
           p.push_back(i);
        }
    }
    preCal();



    int n;
    while(cin>>n && n!=0) solve(n);
    return 0;
}
