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
const int N = 50002;
int mod = 1000000007;
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

void solve()
{
    int n;
    cin >> n;
    ll cnt = 1;
    for (int i = 0; p[i] <= n; i++)
    {
        ll exp = 0;
        ll y = p[i];
        while (y <= n)
        {
            exp = exp + (n / y);
            y = y * p[i];
        }
        cnt = (cnt * (exp + 1)) % mod;
    }
    cout << cnt << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve(N - 1);
    // pre();

    int t;
    cin >> t;
    int c = 1;
    while (t--)
    {
        // cout<<"Case "<<c++<<": ";
        solve();
    }
    return 0;
}