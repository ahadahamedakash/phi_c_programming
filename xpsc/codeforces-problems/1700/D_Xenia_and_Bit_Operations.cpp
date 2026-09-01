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

const int MAXN = 1 << 17;

int seg[4 * MAXN];
int a[MAXN];

void build(int node, int l, int r, int level)
{
    if (l == r)
    {
        seg[node] = a[l];
        return;
    }

    int mid = (l + r) / 2;

    build(node * 2, l, mid, level - 1);
    build(node * 2 + 1, mid + 1, r, level - 1);

    if (level % 2 == 1)
        seg[node] = seg[node * 2] | seg[node * 2 + 1];
    else
        seg[node] = seg[node * 2] ^ seg[node * 2 + 1];
}

void update(int node, int l, int r, int pos, int val, int level)
{
    if (l == r)
    {
        seg[node] = val;
        return;
    }

    int mid = (l + r) / 2;

    if (pos <= mid)
        update(node * 2, l, mid, pos, val, level - 1);
    else
        update(node * 2 + 1, mid + 1, r, pos, val, level - 1);

    if (level % 2 == 1)
        seg[node] = seg[node * 2] | seg[node * 2 + 1];
    else
        seg[node] = seg[node * 2] ^ seg[node * 2 + 1];
}

void smash()
{
    int n, m;
    cin >> n >> m;

    int size = 1 << n;

    for (int i = 0; i < size; ++i)
        cin >> a[i];

    build(1, 0, size - 1, n);

    while (m--)
    {
        int p, b;
        cin >> p >> b;

        --p;
        update(1, 0, size - 1, p, b, n);

        cout << seg[1] << nl;
    }
}

int main()
{
    fastIO();

    smash();

    return 0;
}

/*
    https://codeforces.com/problemset/problem/339/D
*/
