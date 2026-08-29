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
    int n, m;
    cin >> n >> m;

    vll v(n);
    for (auto &i : v)
        cin >> i;

    sort(all(v));
    ll ans = 0;

    for (int x = 1; x <= m; x++)
    {
        ll p = n - (lower_bound(all(v), x) - v.begin());

        ll q = 0;
        if (2 * x <= m)
            q = upper_bound(all(v), 2 * x) - lower_bound(all(v), 2 * x);

        ans = max(ans, p + q);
    }

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
