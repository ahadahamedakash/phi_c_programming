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
    int n;
    cin >> n;

    int ax, ay, bx, by, cx, cy;
    cin >> ax >> ay;
    cin >> bx >> by;
    cin >> cx >> cy;

    --ax, --ay, --bx, --by, --cx, --cy;

    vector<vector<int>> vis(n, vector<int>(n, 0));

    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    auto isSafe = [&](int x, int y)
    {
        return x != ax && y != ay && abs(x - ax) != abs(y - ay);
    };

    queue<pii> q;
    q.push({bx, by});
    vis[bx][by] = 1;

    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();

        if (x == cx && y == cy)
        {
            yes;
            return;
        }

        for (int i = 0; i < 8; ++i)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                continue;

            if (vis[nx][ny])
                continue;

            if (!isSafe(nx, ny))
                continue;

            vis[nx][ny] = 1;
            q.push({nx, ny});
        }
    }

    no;
}

int main()
{
    fastIO();

    smash();

    return 0;
}

/*
    https://codeforces.com/problemset/problem/1033/A
*/
