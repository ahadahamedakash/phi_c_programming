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
using vint = vector<int>;
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

int red = 0, white = 0;

void dfs(int node, int color, vector<vector<int>> &adj, vint &visited)
{
    visited[node]++;
    if (color == 1)
        red++;
    else
        white++;

    for (int neighbor : adj[node])
        if (!visited[neighbor])
            dfs(neighbor, 1 - color, adj, visited);
}

void smash()
{

    int n;
    cin >> n;

    vector<vector<int>> adj(n, vector<int>());
    vint visited(n, 0);

    for (int i = 0; i < n - 1; ++i)
    {
        int u, v;
        cin >> u >> v;

        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(0, 0, adj, visited);

    cout << 1LL * red * white - (n - 1) << nl;
}

int main()
{
    fastIO();

    smash();

    return 0;
}

/*
    https://codeforces.com/problemset/problem/862/B
*/
