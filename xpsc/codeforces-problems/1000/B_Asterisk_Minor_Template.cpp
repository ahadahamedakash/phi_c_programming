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

bool helper(string &s, string &p, string &ans)
{
    int i = 0, j = 0, c = 0;
    for (int i = 1; i < s.size(); ++i)
    {
        string temp = "";
        temp += s[i - 1];
        temp += s[i];
        for (int j = 1; j < p.size(); ++j)
        {
            string temp2 = "";
            temp2 += p[j - 1];
            temp2 += p[j];
            if (temp[0] == temp2[0] && temp[1] == temp2[1])
            {
                ans = temp;
                return true;
            }
        }
    }

    return false;
}

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        string a, b;
        cin >> a >> b;

        int n = sz(a), m = sz(b);

        int eq, last, idx;
        eq = last = idx = 0;

        string ans = "";
        if (a[0] == b[0])
        {
            yes;
            cout << a[0] << '*' << nl;
        }
        else if (a[n - 1] == b[m - 1])
        {
            yes;
            cout << '*' << a[n - 1] << nl;
        }
        else if (helper(a, b, ans))
        {
            yes;
            cout << '*' << ans << "*" << nl;
        }
        else if (helper(b, a, ans))
        {
            yes;
            cout << "*" << ans << "*" << nl;
        }
        else
            no;
    }

    return 0;
}

/*
    https://codeforces.com/problemset/problem/1796/B
*/
