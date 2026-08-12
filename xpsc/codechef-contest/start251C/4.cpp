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

        vector<string> bl;
        int i = 0;
        while (i < n)
        {
            int j = i;
            while (j < n && s[j] == s[i])
                j++;

            bl.push_back(s.substr(i, j - i));
            i = j;
        }

        if (sz(bl) == 1)
        {
            cout << s << nl;
            continue;
        }

        string ans = bl[0] + bl[1];
        for (int i = 1; i + 1 < sz(bl); ++i)
        {
            string curr = bl[i] + bl[i + 1];
            if (curr < ans)
                ans = curr;
        }

        cout << ans << nl;
    }

    return 0;
}
