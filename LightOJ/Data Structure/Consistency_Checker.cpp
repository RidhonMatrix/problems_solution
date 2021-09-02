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

struct node{
    bool endmark;
    node* next[10];
    node(){
        endmark=false;
        for(int i=0;i<10;i++)
            next[i]=NULL;
    }
}*root;

bool insert(string str){
    node* cur=root;
    int len=str.size();
    for(int i=0;i<len;i++){
        int id=str[i]-'0';
        if(cur->next[id]==NULL)
            cur->next[id]=new node();
        cur=cur->next[id];
        if(cur->endmark)
            return true;
    }
    cur->endmark=true;

    for(int i=0;i<10;i++){
        if(cur->next[i]!=NULL){
            return true;
        }
    }
    return false;
}

void del(node* cur){
    for(int i=0;i<10;i++){
        if(cur->next[i])
            del(cur->next[i]);
    }
    delete(cur);
}
void solve(int n){
    string str;
    bool consistent=true;
    for(int i=0;i<n;i++){
        cin>>str;
        if(insert(str) && consistent){
            consistent=false;
        }
    }
    if(consistent)
        cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    #endif

    int t;cin>>t;
    int n;
    int c=1;
    while(t--){
        cin>>n;
        root=new node();
        printf("Case %d: ",c++);
        solve(n);
        del(root);
    }
    return 0;
}
