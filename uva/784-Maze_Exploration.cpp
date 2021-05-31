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

bool visited[31][81];
string str[31];
int n;
#define valid(i,j) i>=0 && i<n && j>=0 && j<str[i].size() and (str[i][j]==' ' || str[i][j]=='*') and visited[i][j]==false
void fill(int i,int j){
    if(valid(i,j)){
        visited[i][j]=true;
        str[i][j]='#';
        fill(i-1,j);
        fill(i+1,j);
        fill(i,j-1);
        fill(i,j+1);
    }
    else{
        return;
    }

}

void solve(){
    int i;
    for(i=0; ;i++){
        getline(cin,str[i]);
        if(str[i][0]=='_') break;
    }
    n=i;
    memset(visited,false,sizeof(visited));
    for(i=0;i<n;i++){
        for(int j=0;j<str[i].size();j++){
            if(str[i][j]=='*'){
                fill(i,j);
            }
        }
    }

    //print
    for(int i=0;i<n+1;i++){
        cout<<str[i]<<endl;
    }

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
