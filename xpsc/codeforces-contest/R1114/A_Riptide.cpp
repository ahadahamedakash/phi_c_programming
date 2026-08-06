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

bool isEqual(int a, int b, int c)
{
    if (a == b || b == c || a == c)
        return true;

    return false;
}

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int ans = 0;

        while (!isEqual(a, b, c))
        {

            if (a > b && a > c)
            {
                if (b < c)
                {
                    a--;
                    b++;
                }
                else
                {
                    a--;
                    c++;
                }
            }
            else if (b > a && b > c)
            {
                if (a < c)
                {
                    b--;
                    a++;
                }
                else
                {
                    b--;
                    c++;
                }
            }
            else
            {
                if (a < b)
                {
                    c--;
                    a++;
                }
                else
                {
                    c--;
                    b++;
                }
            }

            ans++;
        }

        cout << ans << nl;
    }

    return 0;
}
