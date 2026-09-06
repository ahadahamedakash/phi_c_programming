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

int n, m, q;
vpii seg;
vint qry;

bool check(int x)
{
    vint v(n, 0);
    for (int i = 0; i < x; ++i)
        v[qry[i]] = 1;

    for (int i = 1; i < n; ++i)
        v[i] += v[i - 1];

    for (auto &[l, r] : seg)
    {
        int sum = v[r] - ((l > 0) ? v[l - 1] : 0);
        if (sum > (r - l + 1) / 2)
            return true;
    }

    return false;
}

void smash()
{
    cin >> n >> m;
    seg.resize(m);

    for (auto &[l, r] : seg)
    {
        cin >> l >> r;
        l--, r--;
    }

    cin >> q;
    qry.resize(q);
    for (auto &x : qry)
    {
        cin >> x;
        x--;
    }

    int l = 1, r = q, ans = imx;
    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (check(mid))
        {
            ans = min(ans, mid);
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout << (ans == imx ? -1 : ans) << nl;
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
