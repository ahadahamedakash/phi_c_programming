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

        string s;
        cin >> s;

        ll ans = 1;
        for (int i = 0; i < 2; ++i)
        {
            int val = -1, pos = -1;
            bool isPoss = true;

            for (int j = i; j < n; j += 2)
            {
                if (s[j] == '?')
                    continue;

                int curr = s[j] - '0';

                if (val == -1)
                {
                    val = curr;
                    pos = j;
                }
                else
                {
                    int d = (j - pos) / 2, x;

                    if (d % 2 == 0)
                        x = val;
                    else
                        x = 1 - val;

                    if (curr != x)
                    {
                        isPoss = false;
                        break;
                    }
                }
            }

            if (!isPoss)
            {
                ans = 0;
                break;
            }

            if (val == -1)
                ans *= 2;
        }

        cout << ans << nl;
    }

    return 0;
}
