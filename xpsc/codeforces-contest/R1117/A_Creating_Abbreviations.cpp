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
        int n, m;
        cin >> n >> m;

        vector<string> a(n), b(m);
        for (auto &i : a)
            cin >> i;
        for (auto &j : b)
            cin >> j;

        set<char> st;
        for (int i = 0; i < n; ++i)
        {
            char ch = toupper(a[i][0]);
            st.insert(ch);
        }

        vector<bool> v(m, false);
        int pt = 0;
        while (pt < m)
        {
            bool flag = false;

            for (int i = 0; i < m; ++i)
            {
                if (v[i])
                    continue;

                bool isPossible = true;
                for (char c : b[i])
                {
                    if (!st.count(c))
                    {
                        isPossible = false;
                        break;
                    }
                }

                if (isPossible)
                {
                    v[i] = true;
                    st.insert(b[i][0]);
                    pt++;
                    flag = true;
                }
            }

            if (!flag)
                break;
        }

        if (pt == m)
            yes;
        else
            no;
    }

    return 0;
}
