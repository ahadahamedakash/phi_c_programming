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

    int a, b, c;
    cin >> a >> b >> c;

    int rem = a;
    vector<bool> vis(b, false);

    for (int i = 1;; ++i)
    {
        if (vis[rem])
        {
            cout << -1 << nl;
            return 0;
        }

        vis[rem] = true;

        rem *= 10;

        int digit = rem / b;
        rem %= b;

        if (digit == c)
        {
            cout << i << nl;
            return 0;
        }
    }

    return 0;
}

/*
    https://codeforces.com/problemset/problem/900/B
*/
