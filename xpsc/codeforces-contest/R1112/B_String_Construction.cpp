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

        int blocks = n - k;

        if (blocks == 1)
        {
            cout << -1 << nl;
            continue;
        }

        int zero = n / 2, one = n - zero;
        int zBlock, oBlock, start;

        auto helper = [&](int st) -> string
        {
            vector<int> len(blocks, 1);

            int zeroBlock = (blocks + (st == 0)) / 2;
            int oneBlock = blocks - zeroBlock;

            int extraZero = zero - zeroBlock;
            int extraOne = one - oneBlock;

            if (extraZero < 0 || extraOne < 0)
                return "";

            vector<int> zid, oid;
            for (int i = 0; i < blocks; ++i)
            {
                if ((i % 2 == 0 && st == 0) || (i % 2 == 1 && st == 1))
                    zid.push_back(i);
                else
                    oid.push_back(i);
            }

            int p = 0;
            while (extraZero--)
            {
                len[zid[p]]++;
                p = (p + 1) % sz(zid);
            }

            p = 0;
            while (extraOne--)
            {
                len[oid[p]]++;
                p = (p + 1) % sz(oid);
            }

            string s;
            for (int i = 0; i < blocks; ++i)
            {
                char c = ((i % 2 == 0) ? (st == 0 ? '0' : '1') : (st == 0 ? '1' : '0'));

                s.append(len[i], c);
            }

            return s;
        };

        string ans = helper(0);
        if (ans.empty())
            ans = helper(1);

        if (ans.empty())
            cout << -1 << nl;
        else
            cout << ans << nl;
    }

    return 0;
}
