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

    vector<int> p(n), q(n);
    for (int &i : p)
        cin >> i;
    for (int &j : q)
        cin >> j;

    vector<int> perm;
    for (int i = 1; i <= n; ++i)
        perm.push_back(i);

    // int a, b;
    // a = b = 0;
    // int cnt = 1;
    // do
    // {
    //     if (perm == p)
    //         a = cnt;

    //     if (perm == q)
    //         b = cnt;

    //     cnt++;
    // } while (next_permutation(all(perm)));

    // cout << max(0, b - a - 1) << '\n';

    int ans = 0;
    do
    {
        if (perm > p && perm < q)
            ans++;

    } while (next_permutation(all(perm)));

    cout << ans << nl;

    return 0;
}
