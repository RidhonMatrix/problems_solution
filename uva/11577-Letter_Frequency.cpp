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
    string str;
    getline(cin,str);
    int a[150];
    memset(a,0,sizeof(a));
    int temp;
    int max=-1;
    for(int i=0;i<str.size();i++){
        if( (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') ){
            a[tolower(str[i])]++;
            if(max<a[tolower(str[i])])
                max=a[tolower(str[i])];
        }
    }
    for(int i='a';i<='z';i++){
        if(a[i]==max){
            printf("%c",i);
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
    
    int tc = 1;
    cin >> tc;
    getchar();
    for (int t = 1; t <= tc; t++) {
        //cout << "Case #" << t  << ": ";
        solve();
    }
    return 0;
}
