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

    set<ll> st;
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        st.insert(x);
    }

    ll ans = 0, current = 0;
    while (!st.empty())
    {
        auto it = st.lower_bound(current);
        auto prevIt = it;

        if (prevIt != st.begin())
            --prevIt;

        ll next;

        if (it == st.end())
            next = *prevIt;
        else if (it == st.begin())
            next = *it;
        else
        {
            ll d1 = abs(current - *prevIt);
            ll d2 = abs(current - *it);

            if (d1 <= d2)
                next = *prevIt;
            else
                next = *it;
        }

        ans += abs(current - next);
        current = next;

        st.erase(next);
    }

    cout << ans << nl;

    return 0;
}
