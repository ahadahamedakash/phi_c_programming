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

int helper(string &s, int x)
{
    char ch = '*';
    int cnt = 0;

    for (int i = 0; i < sz(s); ++i)
    {
        if (i == x)
            continue;

        if (ch == '*' || s[i] != ch)
        {
            cnt++;
            ch = s[i];
        }
    }

    return cnt;
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

        string s;
        cin >> s;

        int comLen = 1;
        for (int i = 1; i < n; ++i)
            if (s[i] != s[i - 1])
                comLen++;

        int ans = comLen;
        for (int i = 1; i < n - 1; i++)
        {
            int curr = comLen;

            if (s[i - 1] == s[i + 1])
            {
                if (s[i] != s[i - 1])
                    curr -= 2;
            }
            else
            {
                if (s[i] != s[i - 1] && s[i] != s[i + 1])
                    curr -= 1;
            }

            ans = min(ans, curr);
        }

        cout << ans << nl;
    }

    return 0;
}
