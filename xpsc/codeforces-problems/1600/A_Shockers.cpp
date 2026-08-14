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

    int n;
    cin >> n;

    bool possible[26];
    fill(possible, possible + 26, true);

    int ans = 0;
    bool determined = false;

    for (int i = 0; i < n; i++)
    {
        char type;
        string s;
        cin >> type >> s;

        if (type == '.')
        {
            for (char c : s)
                possible[c - 'a'] = false;
        }
        else if (type == '!')
        {
            if (determined)
                ans++;

            bool inWord[26] = {};

            for (char c : s)
                inWord[c - 'a'] = true;

            for (int j = 0; j < 26; j++)
                possible[j] &= inWord[j];
        }
        else
        {
            if (determined && i != n - 1)
                ans++;

            possible[s[0] - 'a'] = false;
        }

        int cnt = 0;

        for (int j = 0; j < 26; j++)
            cnt += possible[j];

        if (cnt == 1)
            determined = true;
    }

    cout << ans << nl;

    return 0;
}

/*
    https://codeforces.com/contest/906/problem/A
*/