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

    int bear1, bear2, bear3, bear4;
    cin >> bear1 >> bear2 >> bear3 >> bear4;

    int car1 = 2 * bear1;
    int car2 = 2 * bear2;
    int car3 = max(bear3, bear4);

    if (car3 > 2 * bear3 || car3 > 2 * bear4)
    {
        cout << -1 << nl;
        return 0;
    }

    if (car2 <= 2 * bear4)
    {
        cout << -1 << nl;
        return 0;
    }

    if (car1 <= car2 || car2 <= car3)
    {
        cout << -1 << nl;
        return 0;
    }

    cout << car1 << nl;
    cout << car2 << nl;
    cout << car3 << nl;

    return 0;
}

/*
    https://codeforces.com/contest/907/problem/A
*/
