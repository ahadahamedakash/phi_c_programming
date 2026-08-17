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
        int n, m;
        cin >> n >> m;

        vector<ll> a(n), b(m);
        for (auto &i : a)
            cin >> i;
        for (auto &j : b)
            cin >> j;

        ll i = 0, j = 0, ans = llmx;
        ll p = a[0], q = b[0];

        while (true)
        {
            ll x, y;

            if (i + 1 < n)
                x = p - a[i + 1] + 1;
            else
                x = p;

            if (j + 1 < m)
                y = q - b[j + 1] + 1;
            else
                y = q;

            if (y <= x)
            {
                p -= y;
                q -= y;

                if (j + 1 == m)
                {
                    ans = 1;
                    break;
                }

                j++;
                q = b[j];
            }
            else
            {
                p -= x;
                q -= x;

                if (i + 1 == n)
                {
                    ans = 2;
                    break;
                }

                i++;
                p = a[i];
            }
        }

        cout << ans << nl;
    }

    return 0;
}
