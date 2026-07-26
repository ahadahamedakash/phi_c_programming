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

bool kthBitOn(ll n, int k)
{
    return ((n >> k) & 1);
}

ll turnOnKthBit(ll n, int k)
{
    return (n | (1LL << k));
}

ll turnOffKthBit(ll n, int k)
{
    return (n & (~(1LL << k)));
}

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        ll a = 0, b, c, d;
        cin >> b >> c >> d;

        a = b;
        int MSB = max({__lg(b), __lg(c), __lg(d)});

        for (int k = 0; k <= MSB; ++k)
        {
            if (!kthBitOn(b, k) && kthBitOn(d, k))
                a = turnOnKthBit(a, k);

            if (kthBitOn(c, k) && kthBitOn(d, k))
                a = turnOffKthBit(a, k);
        }

        if ((a | b) - (a & c) == d)
            cout << a << nl;
        else
            cout << -1 << nl;
    }

    return 0;
}

/*
    https://codeforces.com/problemset/problem/2020/C
*/
