#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define ll long long
#define endl '\n'
#define deb(x) cout << #x << " = " << x << endl
#define deb2(x, y) cout << #x << " = " << x << "," << #y << "=" << y << endl
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

const int N = 1e7;
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
    ll n;
    cin >> n;
    n = sqrtl(n);
    ll mx = -1;
    for (int i = 0; i < p.size() && p[i] * p[i] <= n; i++)
    {
        if (n % p[i] == 0)
        {
            while (n % p[i] == 0)
            {
                n /= p[i];
            }
            mx = max(mx, p[i]);
        }
    }
    if (n > 1)
        mx = max(mx, n);

    cout << mx << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve(N);
    // int t;cin>>t;
    // int c = 1;
    // while(t--){
    // cout<<"Case "<<c++<<": ";
    solve();
    // }
    return 0;
}