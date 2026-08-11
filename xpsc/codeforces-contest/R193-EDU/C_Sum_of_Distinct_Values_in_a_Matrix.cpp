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
        int n, m, x, y;
        cin >> n >> m >> x >> y;

        vector<int> a(x), b(y);
        for (auto &i : a)
            cin >> i;
        for (auto &j : b)
            cin >> j;

        int p1 = x - 1, p2 = y - 1;
        ll ans = 0;
        int r = 0, c = 0, total = 0;
        int lt = n + m - 1;

        while ((p1 >= 0 || p2 >= 0) && total < lt)
        {
            int valA = (p1 >= 0) ? a[p1] : -1;
            int valB = (p2 >= 0) ? b[p2] : -1;

            if (valA == valB)
            {
                ans += valA;
                total++;
                p1--;
                p2--;
            }
            else if (valA > valB)
            {
                if (r < n)
                {
                    ans += valA;
                    r++;
                    total++;
                }
                p1--;
            }
            else
            {
                if (c < m)
                {
                    ans += valB;
                    c++;
                    total++;
                }
                p2--;
            }
        }

        cout << ans << nl;
    }

    return 0;
}

/*
    https://codeforces.com/contest/2253/problem/C
*/
