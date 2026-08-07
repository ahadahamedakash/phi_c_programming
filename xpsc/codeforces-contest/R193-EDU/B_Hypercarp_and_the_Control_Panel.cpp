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

        vector<int> v(n);
        for (auto &i : v)
            cin >> i;

        vector<pair<int, int>> bl;
        for (int i = 0; i < n;)
        {
            int j = i;
            while (j < n && v[j] == v[i])
                j++;

            bl.push_back({v[i], j - i});
            i = j;
        }

        int ans = sz(bl);
        for (int i = 0; i < sz(bl) - 1; ++i)
        {
            if (bl[i].second > 1 && bl[i + 1].second > 1)
            {
                ans = sz(bl) + 2;
                break;
            }
        }

        if (ans == sz(bl))
        {
            for (int i = 0; i < sz(bl); ++i)
            {
                if (bl[i].second < 2)
                    continue;

                if (i + 1 < sz(bl) && (i + 2 == sz(bl) || bl[i + 2].first != bl[i].first))
                {
                    ans = sz(bl) + 1;
                    break;
                }

                if (i - 1 >= 0 && (i - 2 < 0 || bl[i - 2].first != bl[i].first))
                {
                    ans = sz(bl) + 1;
                    break;
                }
            }
        }

        cout << ans << nl;
    }

    return 0;
}
