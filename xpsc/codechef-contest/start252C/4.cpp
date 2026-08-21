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

const ll MOD = 998244353;

ll mpd(ll a, ll b)
{
    ll res = 1;
    for (int i = 0; i < b; ++i)
        res = (res * a) % MOD;

    return res;
}

void smash()
{
    int n;
    cin >> n;

    vi v(n + 5, 0);

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v[x]++;
    }

    vll w(n + 2);
    for (int i = 0; i <= n + 1; ++i)
        w[i] = (mpd(2, v[i]) - 1 + MOD) % MOD;

    ll ans = 0, pref = 1;
    for (int i = 0; i <= n; ++i)
    {
        if (i > 0)
            pref = pref * w[i - 1] % MOD;

        if (i == 0)
        {
            ans += w[1];
            ans %= MOD;
        }
        else
        {
            ans += pref;
            ans %= MOD;

            if (i + 1 <= n)
            {
                ll curr = pref * w[i + 1] % MOD;

                ans += curr;
                ans %= MOD;
            }
        }
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
