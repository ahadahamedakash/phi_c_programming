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

    vint v(n);
    for (auto &i : v)
        cin >> i;

    int lpt = -1, rpt = -1, l = -1;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] != 0)
        {
            if (l == -1)
                l = i;

            if (v[i] == 1)
            {
                if (i - l > (rpt - lpt))
                {
                    lpt = l;
                    rpt = i;
                }

                l = i;
            }
        }
    }

    if (l != -1)
    {
        int r = l;
        for (int i = l + 1; i < n; ++i)
        {
            if (v[i] != 0)
                r = i;

            if (v[i] == 1)
                break;
        }

        if (r - l > (rpt - lpt))
        {
            lpt = l;
            rpt = r;
        }
    }

    if (lpt == -1)
    {
        for (int i = 0; i < n; ++i)
        {
            if (v[i] == -1)
            {
                lpt = i;
                rpt = i;

                break;
            }
        }
    }

    for (int i = 0; i < n; ++i)
        if (v[i] == -1)
            v[i] = 0;

    if (lpt != -1)
    {
        v[lpt] = 1;
        v[rpt] = 1;
    }

    printv(v);
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
