/***
**    Author: Rejaul Karim Ridhon
***/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define F first
#define S second
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'
#define for0(n) for (int i = 0; i < (int)(n); ++i)

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

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    VI a, b;
    int tmp;
    for0(n) cin >> tmp, a.push_back(tmp);
    for0(m) cin >> tmp, b.push_back(tmp);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int c = 0;
    for (int i = 0, j = 0; i < n && j < m;)
    {
        if (a[i] - k <= b[j] && a[i] + k >= b[j])
        {
            i++;
            j++;
            c++;
        }
        else if (a[i] - k > b[j])
        {
            j++;
        }
        else if (a[i] + k < b[j])
        {
            i++;
        }
    }
    cout << c << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    IOS

    solve();

    return 0;
}