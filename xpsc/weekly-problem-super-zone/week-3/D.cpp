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

bool kthBitOn(int n, int k)
{
    return ((n >> k) & 1);
}

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        int x;
        cin >> x;

        int MSB = __lg(x), B = (1 << MSB), A = (x ^ B), sum = B, cnt = 0;

        for (int k = 0; k <= MSB; ++k)
        {
            if (!kthBitOn(A, k) && !kthBitOn(B, k) && (sum + (1 << k) <= x))
            {
                cnt++;
                sum += (1 << k);
            }
        }

        int ans = (1 << cnt);
        cout << ans << nl;
    }

    return 0;
}
