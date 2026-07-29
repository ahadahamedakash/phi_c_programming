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
        int x, y, z;
        cin >> x >> y >> z;

        if (y == z || y > z)
        {
            cout << -1 << nl;
            continue;
        }

        int gpuPrice = x, coins = 0, months = 0;

        while (true)
        {
            months++;
            gpuPrice += y;
            coins += z;

            if (coins >= gpuPrice)
            {
                cout << months << nl;
                break;
            }
        }
    }

    return 0;
}
