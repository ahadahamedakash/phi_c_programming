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

    int n, root;
    cin >> n;

    vector<int> g[n + 1], bad(n + 1), a(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        int p, c;
        cin >> p >> c;
        int u = p, v = i;

        if (u != -1)
            g[u].push_back(v);
        else
            root = i;

        if (c == 1)
        {
            bad[u]++;
            a[v] = 1;
        }
    }

    vector<int> ans;
    for (int i = 1; i <= n; ++i)
    {
        if (root == i)
            continue;

        if (g[i].size() == bad[i] && a[i] == 1)
            ans.push_back(i);
    }

    if (ans.empty())
        cout << -1 << nl;
    else
    {
        for (int i = 0; i < sz(ans); ++i)
            cout << ans[i] << spc;

        cout << nl;
    }

    return 0;
}

/*
    https://codeforces.com/problemset/problem/1143/C
*/
