// #include <bits/stdc++.h>

// #define nl '\n'
// #define spc ' '

// #define imx INT_MAX
// #define imn INT_MIN
// #define llmx LLONG_MAX
// #define llmn LLONG_MIN

// #define ll long long int
// #define ld long double

// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define Yes cout << "Yes\n"
// #define No cout << "No\n"
// #define neg1 cout << "-1\n"

// #define sqr(x) ((x) * (x))
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()

// #define dbg(x) cerr << #x << " = " << (x) << nl

// #define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

// using namespace std;

// // Vector
// using vint = vector<int>;
// using vll = vector<ll>;

// // Pair
// using pii = pair<int, int>;
// using pll = pair<ll, ll>;

// // Vector of pairs
// using vpii = vector<pii>;
// using vpll = vector<pll>;

// // Print vector
// template <typename T>
// void printv(const vector<T> &v)
// {
//     for (auto x : v)
//         cout << x << spc;

//     cout << nl;
// }

// void smash()
// {
//     int n;
//     cin >> n;

//     vll v(n);
//     ll z = 0;
//     for (auto &i : v)
//     {
//         cin >> i;

//         if (i == 0)
//             z++;
//     }

//     if (z == 1)
//     {
//         no;
//         return;
//     }

//     yes;
//     string s(n, 'C');

//     if (z == 0)
//     {
//         for (int i = 0; i < n; ++i)
//             s[i] = 'A';

//         cout << s << nl;
//         return;
//     }

//     bool flag = true;
//     for (int i = 0; i < n; ++i)
//     {
//         if (v[i] == 0)
//         {
//             if (flag)
//             {
//                 s[i] = 'A';
//                 flag = false;
//             }
//             else
//                 s[i] = 'B';
//         }
//         else
//             s[i] = 'C';
//     }

//     cout << s << '\n';
// }

// int main()
// {
//     fastIO();

//     int tc;
//     cin >> tc;

//     while (tc--)
//         smash();

//     return 0;
// }
