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

        int ans;

        if (n % 3 == 0)
            ans = 0;
        else if (n % 3 == 1)
            ans = 2;
        else
            ans = 1;

        int nxt = ((n / 5) + 1) * 5, x;

        if (nxt % 3 == 0)
            x = 1;
        else if (nxt % 3 == 1)
            x = 2;
        else
            x = 3;

        cout << min(ans, x) << nl;
    }

    return 0;
}
