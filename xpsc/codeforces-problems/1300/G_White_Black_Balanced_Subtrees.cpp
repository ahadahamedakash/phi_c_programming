#include <bits/stdc++.h>

#define nl '\n'
#define spc ' '

#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN

#define ll long long int
#define ld long double

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define neg1 cout << "-1\n"

#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define dbg(x) cerr << #x << " = " << (x) << nl

#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

// Vector
using vi = vector<int>;
using vll = vector<ll>;

// Pair
using pii = pair<int, int>;
using pll = pair<ll, ll>;

// Vector of pairs
using vpii = vector<pii>;
using vpll = vector<pll>;

// Print vector
template <typename T>
void printv(const vector<T> &v)
{
    for (auto x : v)
        cout << x << spc;

    cout << nl;
}

int ans = 0;

int dfs(int node, vector<vector<int>> &adj, string &s)
{
    if (adj[node].size() == 0)
        return s[node - 1] == 'W' ? 1 : -1;

    int cnt = 0;
    for (auto ch : adj[node])
        cnt += dfs(ch, adj, s);

    cnt += (s[node - 1] == 'W' ? 1 : -1);

    if (cnt == 0)
        ans++;

    return cnt;
}

void smash()
{
    ans = 0;

    int n;
    cin >> n;

    vector<vector<int>> adj(n + 1, vector<int>());
    for (int i = 0; i < n - 1; ++i)
    {
        int tmp;
        cin >> tmp;
        adj[tmp].push_back(i + 2);
    }

    string s;
    cin >> s;

    dfs(1, adj, s);

    cout << ans << nl;
}

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
        smash();

    return 0;
}
