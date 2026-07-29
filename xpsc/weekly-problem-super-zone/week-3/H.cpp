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

    string s;
    cin >> s;

    int len = sz(s), ans = 0;

    for (int i = 1; i < len; ++i)
        ans += (1 << i);

    int val = 0;
    for (char c : s)
    {
        val *= 2;

        if (c == '7')
            val++;
    }

    cout << ans + val + 1 << nl;

    return 0;
}
