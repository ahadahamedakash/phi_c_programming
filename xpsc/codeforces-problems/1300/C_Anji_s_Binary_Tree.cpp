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

const int maxN = 3e5 + 9;

vector<int> g[maxN], oper(maxN);
string s;

void dfs(int u)
{
    if (g[u][0] != 0)
    {
        int v = g[u][0];
        if (s[u - 1] != 'L')
            oper[v] = oper[u] + 1;
        else
            oper[v] = oper[u];

        dfs(v);
    }

    if (g[u][1] != 0)
    {
        int v = g[u][1];
        if (s[u - 1] != 'R')
            oper[v] = oper[u] + 1;
        else
            oper[v] = oper[u];

        dfs(v);
    }
}

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        cin >> s;

        for (int i = 0; i <= n; ++i)
        {
            g[i].clear();
            oper[i] = 0;
        }

        for (int i = 1; i <= n; ++i)
        {
            int u, v;
            cin >> u >> v;
            g[i].push_back(u);
            g[i].push_back(v);
        }

        dfs(1);

        int ans = imx;
        for (int i = 1; i <= n; ++i)
            if (g[i][0] == 0 && g[i][1] == 0)
                ans = min(ans, oper[i]);

        cout << ans << nl;
    }

    return 0;
}

/*
    https://codeforces.com/problemset/problem/1900/C
*/
