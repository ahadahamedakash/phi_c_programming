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
        ll n;
        cin >> n;

        ll mxBit = __lg(n);
        deque<ll> ans;
        for (int k = 0; k <= mxBit; ++k)
        {
            if ((n >> k) & 1)
            {
                ll val = n - (1LL << k);

                if (val > 0)
                    ans.push_front(val);
            }
        }

        ans.push_back(n);
        cout << sz(ans) << nl;

        for (auto val : ans)
            cout << val << spc;
        cout << nl;
    }

    return 0;
}

/*
    https://codeforces.com/problemset/problem/1988/C
*/
