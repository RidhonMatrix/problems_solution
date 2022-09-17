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

// O(N log (log N))
const int N = 1e6;
bool marked[N];
vector<ll> p;
bool isPrime(int n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    return marked[n] == false;
}
void sieve(int n)
{
    for (int i = 3; i * i <= n; i += 2)
    {
        if (marked[i] == false)
        {
            for (int j = i * i; j <= n; j += i + i)
            {
                marked[j] = true;
            }
        }
    }
    for (int i = 2; i < N; i++)
    {
        if (isPrime(i))
            p.push_back(i);
    }
}

vector<pii> factor(int n)
{
    vector<pair<int, int>> v;
    for (int i = 0; i < p.size() && p[i] * p[i] <= n; i++)
    {
        int cnt = 0;
        if (n % p[i] == 0)
        {
            while (n % p[i] == 0)
            {
                n /= p[i];
                cnt++;
            }
        }
        v.push_back({p[i], cnt});
    }
    if (n > 1)
        v.push_back({n, 1});

    return v;
}

int findPowerOfP(int n, int p)
{
    int count = 0;
    int r = p;
    while (r <= n)
    {
        count += (n / r);

        r = r * p;
    }
    return count;
}

void solve()
{
    int m, n;
    cin >> m >> n;
    vector<pii> v = factor(m);
    int ans = INT_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        ans = min(ans, findPowerOfP(n, v[i].first) / v[i].second);
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve(N);
    int c = 1;
    int t;
    cin >> t;
    while (t--)
    {
        cout << "Case " << c++ << ':' << endl;
        solve();
    }

    return 0;
}