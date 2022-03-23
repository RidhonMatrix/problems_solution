/***
**    Author: Rejaul Karim Ridhon
***/
#include<bits/stdc++.h>
using namespace std;

#define ll           long long

#define pb           push_back
#define pob          pop_back

#define F            first
#define S            second
#define deb(x)       cout << #x << "=" << x << endl
#define deb2(x, y)   cout << #x << "=" << x << "," << #y << "=" << y << endl
#define Fin          freopen("input.txt","r",stdin);
#define Fout         freopen("output.txt","w",stdout);
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define for0(n) for (int i = 0; i < (int)(n); ++i)

template <typename T> void Print(T ar[] , int n) {for (int i = 0; i + 1 < n; i++)cout << ar[i] << " ";cout << ar[n - 1] << "\n";}
template <typename T> void Print(const vector<T> &v) {for (int i = 0; i + 1 < v.size() ; i++) cout << v[i] << " ";cout << v.back() << "\n";}

void solve(){
    int n;
    cin>>n;
    int a[n+1];
    ll sum=0;
    for0(n){
        a[i]=i+1;
        sum+=a[i];
    }
    if(sum%2==1) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        set<int>s1;
        set<int>s2;
        ll half=sum/2;
        ll halfSum=0;
        for(int i=n-1;i>=0;i--){
            if( (halfSum+a[i]) <=half){
                halfSum+=a[i];
                s1.insert(a[i]);
            }
            else s2.insert(a[i]);
        }
        cout<<s1.size()<<endl;
        for(auto it=s1.begin(); it!=s1.end();++it){
            cout<<*it<<" ";
        }
        cout<<endl;
        cout<<s2.size()<<endl;
        for(auto it=s2.begin(); it!=s2.end();it++){
            cout<<*it<<" ";
        }


    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    #endif

    int tc = 1;
    //cin >> tc;
    for (int t = 1; t <= tc; t++) {
        //cout << "Case #" << t  << ": ";
        solve();
    }
    return 0;
}
