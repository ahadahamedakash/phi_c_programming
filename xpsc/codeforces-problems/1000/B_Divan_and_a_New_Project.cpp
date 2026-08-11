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
        ll n;
        cin >> n;

        vector<ll> v(n);
        for (auto &i : v)
            cin >> i;

        vector<pair<ll, ll>> buildMp;
        for (int i = 0; i < n; ++i)
            buildMp.push_back({v[i], i});

        sort(rall(buildMp));

        vector<ll> ans(n + 1, 0);
        ans[0] = 0;

        ll minutes = 0, coordinate = 1;
        for (int i = 0; i < n; ++i)
        {
            ans[buildMp[i].second + 1] = coordinate;
            minutes += (2 * abs(coordinate) * buildMp[i].first);

            if (coordinate < 0)
                coordinate = abs(coordinate) + 1;
            else
                coordinate = -coordinate;
        }

        cout << minutes << nl;
        for (auto val : ans)
            cout << val << spc;

        cout << nl;
    }

    return 0;
}

/*
    https://codeforces.com/problemset/problem/1614/B
*/
