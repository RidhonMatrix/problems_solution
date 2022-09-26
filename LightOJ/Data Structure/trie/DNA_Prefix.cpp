/***
**    Author: Rejaul Karim Ridhon
***/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pob pop_back

/**Define memory set function**/
#define mem(x, y) memset(x, y, sizeof(x))
#define CLEAR(x) memset(x, 0, sizeof(x))

#define F first
#define S second
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl '\n'
#define for0(n) for (int i = 0; i < (int)(n); ++i)
#define MapPnt(a)                                          \
    {                                                      \
        for (auto it : a)                                  \
        {                                                  \
            cout << it.first << ": " << it.second << endl; \
        }                                                  \
        cout << endl;                                      \
    }

template <class T>
T MIN3(T a, T b, T c)
{
    return min(a, min(b, c));
} /// minimum of 3 number
template <class T>
T MAX3(T a, T b, T c) { return max(a, max(b, c)); } /// maximum of 3 number
template <typename T>
void Print(T ar[], int n)
{
    for (int i = 0; i + 1 < n; i++)
        cout << ar[i] << " ";
    cout << ar[n - 1] << "\n";
}
template <typename T>
void Print(const vector<T> &v)
{
    for (int i = 0; i + 1 < v.size(); i++)
        cout << v[i] << " ";
    cout << v.back() << "\n";
}

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int, int> MPII;
typedef set<int> SETI;

#define max 4
struct node
{
    bool endmark;
    ll c;
    node *next[max];
    node()
    {
        c = 0;
        endmark = false;
        for (int i = 0; i < max; i++)
            next[i] = NULL;
    }
} * root;

int mx;

void insert(string str)
{
    node *cur = root;
    int len = str.size();
    for (int i = 0; i < len; i++)
    {
        int id;
        if (str[i] == 'A')
            id = 0;
        else if (str[i] == 'C')
            id = 1;
        else if (str[i] == 'G')
            id = 2;
        else
            id = 3;
        if (cur->next[id] == NULL)
            cur->next[id] = new node();
        cur = cur->next[id];
        cur->c++;
        if (mx < cur->c * (i + 1))
        {
            mx = cur->c * (i + 1);
        }
    }
    cur->endmark = true;
}

void del(node *cur)
{
    for (int i = 0; i < max; i++)
    {
        if (cur->next[i])
            del(cur->next[i]);
    }
    delete (cur);
}

void solve()
{
    root = new node();
    mx = -1;
    int n;
    cin >> n;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        insert(str);
    }

    cout << mx << endl;
    del(root);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
// freopen("out.txt", "w", stdout);
#endif
    // IOS

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        cout << "Case " << t << ": ";
        solve();
    }

    return 0;
}
