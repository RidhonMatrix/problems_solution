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

#define max 52
struct node
{
    bool endmark;
    node *next[max];
    int count;
    node()
    {
        endmark = false;
        for (int i = 0; i < max; i++)
        {
            next[i] = NULL;
        }
        count = 0;
    }
} * root;

void insert(string str)
{
    node *cur = root;
    int len = str.size();
    for (int i = 0; i < len; i++)
    {
        int id;
        if (isupper(str[i]))
            id = str[i] - 'A' + 26;
        else
            id = str[i] - 'a';

        if (cur->next[id] == NULL)
            cur->next[id] = new node();
        cur = cur->next[id];
    }
    cur->endmark = true;
    cur->count++;
}

int search(string str)
{
    node *cur = root;
    int len = str.size();
    for (int i = 0; i < len; i++)
    {
        int id;
        if (isupper(str[i]))
            id = str[i] - 'A' + 26;
        else
            id = str[i] - 'a';
        if (cur->next[id] == NULL)
            return 0;
        cur = cur->next[id];
    }
    if (cur->endmark)
        return cur->count;
    else
        return 0;
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

string convert(string str)
{
    if (str.size() == 1 || str.size() == 2 || str.size() == 3)
        return str;
    string newStr = "";
    newStr += str[0];
    newStr += str[str.size() - 1];

    string sorted = "";

    for (int i = 1; i < str.size() - 1; i++)
    {
        sorted += str[i];
    }
    sort(sorted.begin(), sorted.end());
    newStr += sorted;
    return newStr;
}

void solve()
{

    root = new node();
    int n;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        insert(convert(s));
    }
    string u;
    int m;
    cin >> m;
    cin.ignore();
    while (m--)
    {
        int sum = 1;
        getline(cin, u);
        stringstream s(u);
        string word;
        while (s >> word)
        {
            sum *= search(convert(word));
        }
        cout << sum << endl;
    }
    del(root);
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
        cout << "Case " << c++ << ":" << endl;
        solve();
    }
    return 0;
}