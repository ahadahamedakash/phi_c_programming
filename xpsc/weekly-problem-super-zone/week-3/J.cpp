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
        for (int &i : v)
            cin >> i;

        int k = 1;
        for (int i = 0; i < 20; ++i)
        {
            int last = 0;
            bool flag = false;

            for (int j = 1; j <= n; ++j)
            {
                if ((v[j - 1] & (1 << i)) != 0)
                {
                    k = max(k, j - last);
                    last = j;
                    flag = true;
                }
            }

            if (flag)
                k = max(k, n - last + 1);
        }

        cout << k << nl;
    }

    return 0;
}
