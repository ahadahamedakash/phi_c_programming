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

int getDigitSum(int x)
{
    int sum = 0;

    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

void smash()
{
    int n, q;
    cin >> n >> q;

    vint v(n + 1);
    set<int> st;

    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];

        if (v[i] >= 10)
            st.insert(i);
    }

    while (q--)
    {
        int ty;
        cin >> ty;

        if (ty == 1)
        {
            int l, r;
            cin >> l >> r;

            auto it = st.lower_bound(l);
            while (it != st.end() && *it <= r)
            {
                int idx = *it;

                v[idx] = getDigitSum(v[idx]);

                if (v[idx] < 10)
                    it = st.erase(it);
                else
                    ++it;
            }
        }
        else
        {
            int x;
            cin >> x;

            cout << v[x] << nl;
        }
    }
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
