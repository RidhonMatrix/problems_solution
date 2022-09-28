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

int mod = 1e9 + 7;

ll modularExpo(ll a, ll n, ll m)
{
    ll res = 1;
    while (n)
    {
        if (n % 2)
        {
            res = (res * a) % m;
            n--;
        }
        else
        {
            a = (a * a) % m;
            n /= 2;
        }
    }
    return res;
}
/*
    mod = 1e9 + 7 is prime so using this
    a ^ b % m = a ^ (b % (m-1)) % m formula

    because phi(m) = (m-1) if m is prime

*/

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    cout << modularExpo(a, modularExpo(b, c, mod - 1), mod) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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