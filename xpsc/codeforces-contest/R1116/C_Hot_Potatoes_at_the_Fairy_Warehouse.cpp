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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int total = 2 * n;
        vector<int> v(total, 0);

        if (k == 0)
        {
            for (int i = 0; i < total; ++i)
                v[i] = (s[i] - '0');
        }
        else
        {
            for (int i = 0; i < total; ++i)
            {
                if (s[i] == '1')
                {
                    int idx = (i + 1) % total;
                    if (s[idx] == '0')
                        v[idx] = 1;
                    else
                        v[i] = 1;
                }
            }
        }

        int red, blue;
        red = blue = 0;
        for (int i = 0; i < total; ++i)
        {
            if (v[i] == 1)
            {
                if ((i + 1) % 2 == 0)
                    red++;
                else
                    blue++;
            }
        }

        cout << red << spc << blue << nl;
    }

    return 0;
}

/*
    https://codeforces.com/contest/2256/problem/C
*/
