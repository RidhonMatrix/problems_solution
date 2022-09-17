#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define ll long long
#define endl '\n'
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

#define mx 500005

int d[mx];
unsigned long long sumDiv[mx];
void nDivisorCount(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            sumDiv[j] += i;
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    cout << sumDiv[n] - n << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int c = 1;
    nDivisorCount(mx);
    while (t--)
    {
        // cout<<"Case "<<c++<<": ";
        solve();
    }
    return 0;
}