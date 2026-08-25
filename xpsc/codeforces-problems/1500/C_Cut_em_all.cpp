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

void smash()
{
    int n;
    cin >> n;

    vector<vint> adj(n + 1);
    for (int i = 0; i < n - 1; ++i)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if (n % 2)
    {
        neg1;
        return;
    }

    vint parent(n + 1, 0), subt(n + 1, 1), order;

    order.push_back(1);
    parent[1] = -1;

    for (int i = 0; i < sz(order); ++i)
    {
        int u = order[i];

        for (auto v : adj[u])
        {
            if (v == parent[u])
                continue;

            parent[v] = u;
            order.push_back(v);
        }
    }

    int ans = 0;
    for (int i = n - 1; i > 0; --i)
    {
        int u = order[i];

        if (subt[u] % 2 == 0)
            ans++;

        subt[parent[u]] += subt[u];
    }

    cout << ans << nl;
}

int main()
{
    fastIO();

    smash();

    return 0;
}

/*
    https://codeforces.com/problemset/problem/982/C
*/
