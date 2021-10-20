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
#define ln           '\n'
#define for0(n) for (int i = 0; i < (int)(n); ++i)

template<class T> T MIN3(T a,T b,T c) {return min(a,min(b,c));} /// minimum of 3 number
template<class T> T MAX3(T a,T b,T c) {return max(a,max(b,c));} ///maximum of 3 number
template <typename T> void Print(T ar[] , int n) {for (int i = 0; i + 1 < n; i++)cout << ar[i] << " ";cout << ar[n - 1] << "\n";}
template <typename T> void Print(const vector<T> &v) {for (int i = 0; i + 1 < v.size() ; i++) cout << v[i] << " ";cout << v.back() << "\n";}

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;

void solve(){
    string str;
    cin>>str;
    int a[92];
    for0(91) a[i]=0;
    for(int i=0;i<str.size();i++){
        a[str[i]]++;
    }

    int oddCount=0;
    int evenCount=0;
    char oddPosition='a';

    for(int i='A';i<='Z';i++){
        if(a[i]%2==1){
            oddCount++;
            oddPosition=i;
        }
    }
    list<char> myList;
    if(oddCount>1){
        cout<<"NO SOLUTION"<<endl;
    }else{
        if(oddCount==1){
            for(int i=0;i<a[oddPosition];i++){
                myList.push_back(oddPosition);
            }
        }
        for(int i='A';i<='Z';i++){
            if((int)oddPosition==(int)i || a[i]==0) continue;

            for(int j=0;j<a[i]/2;j++){
                myList.push_front(i);
                myList.push_back(i);
            }
        }

        for(char x: myList)
            cout<<x;
        cout<<ln;
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
    for (int t = 1; t <= tc; t++) {
        //cout << "Case #" << t  << ": ";
        solve();
    }
    return 0;
}
