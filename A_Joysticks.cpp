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

void solve()
{
    int n, m;
    cin >> n >> m;
    if (n == m)
        cout << n + m - 3 << endl;
    else
        cout << n + m - 2 << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;cin>>t;
    // int c = 1;
    // while(t--){
    // cout<<"Case "<<c++<<": ";
    solve();
    //}
    return 0;
}