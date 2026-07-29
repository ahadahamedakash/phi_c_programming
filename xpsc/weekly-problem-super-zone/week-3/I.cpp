#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<ll> v(n);
        for (auto &i : v)
            cin >> i;

        ll ans = 0;
        for (int k = 0; k <= 12; ++k)
        {
            bool one, zero;
            one = zero = false;

            for (int i = 0; i < n; ++i)
            {
                bitset<13> b(v[i]);
                one |= (b[k] == 1);
                zero |= (b[k] == 0);
            }

            if (one && zero)
                ans += (1LL << k);
        }

        cout << ans << nl;
    }

    return 0;
}
