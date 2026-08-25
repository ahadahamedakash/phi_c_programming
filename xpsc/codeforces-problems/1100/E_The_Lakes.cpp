#include <bits/stdc++.h>

#define nl '\n'
#define spc ' '

#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN

#define ll long long int
#define ld long double

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define neg1 cout << "-1\n"

#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define dbg(x) cerr << #x << " = " << (x) << nl

#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

// Vector
using vint = vector<int>;
using vll = vector<ll>;

// Pair
using pii = pair<int, int>;
using pll = pair<ll, ll>;

// Vector of pairs
using vpii = vector<pii>;
using vpll = vector<pll>;

// Print vector
template <typename T>
void printv(const vector<T> &v)
{
    for (auto x : v)
        cout << x << spc;

    cout << nl;
}

void smash()
{
    int n, m;
    cin >> n >> m;

    vector<vint> a(n, vint(m));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];

    vector<vector<bool>> vis(n, vector<bool>(m, false));

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    ll ans = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (a[i][j] == 0 || vis[i][j])
                continue;

            ll volume = 0;

            queue<pii> q;
            q.push({i, j});
            vis[i][j] = true;

            while (!q.empty())
            {
                auto [x, y] = q.front();
                q.pop();

                volume += a[x][y];

                for (int i = 0; i < 4; ++i)
                {
                    int nx = x + dx[i];
                    int ny = y + dy[i];

                    if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                        continue;

                    if (a[nx][ny] == 0 || vis[nx][ny])
                        continue;

                    vis[nx][ny] = true;
                    q.push({nx, ny});
                }
            }

            ans = max(ans, volume);
        }
    }

    cout << ans << nl;
}

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
        smash();

    return 0;
}

/*
    https://codeforces.com/problemset/problem/1829/E
*/
