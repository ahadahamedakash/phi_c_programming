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
    int h, w, k;
    cin >> h >> w >> k;

    vector<string> s(h);
    for (auto &i : s)
        cin >> i;

    vector<bool> unsafeRow(h, false), unsafeCol(w, false);
    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            if (s[i][j] == '#')
            {
                unsafeRow[i] = true;
                unsafeCol[j] = true;
            }
        }
    }

    vector<vint> dist(h, vint(w, -1));
    queue<pii> q;

    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            if (s[i][j] == '.' && !unsafeRow[i] && !unsafeCol[j])
            {
                dist[i][j] = 0;
                q.push({i, j});
            }
        }
    }

    int di[] = {-1, 1, 0, 0}, dj[] = {0, 0, -1, 1};

    while (!q.empty())
    {
        auto [i, j] = q.front();
        q.pop();

        for (int k = 0; k < 4; ++k)
        {
            int ni = i + di[k];
            int nj = j + dj[k];

            if (ni < 0 || ni >= h || nj < 0 || nj >= w)
                continue;

            if (s[ni][nj] == '#')
                continue;

            if (dist[ni][nj] != -1)
                continue;

            dist[ni][nj] = dist[i][j] + 1;
            q.push({ni, nj});
        }
    }

    int ans = 0;
    for (int i = 0; i < h; ++i)
        for (int j = 0; j < w; ++j)
            if (s[i][j] == '.' && dist[i][j] != -1 && dist[i][j] <= k)
                ans++;

    cout << ans << nl;
}

int main()
{
    fastIO();

    smash();

    return 0;
}
