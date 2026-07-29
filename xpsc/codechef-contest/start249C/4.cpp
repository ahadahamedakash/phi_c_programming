// #include <bits/stdc++.h>
// #define nl '\n'
// #define spc ' '
// #define imx INT_MAX
// #define imn INT_MIN
// #define llmx LLONG_MAX
// #define llmn LLONG_MIN
// #define ld long double
// #define ll long long int
// #define no cout << "NO\n"
// #define yes cout << "YES\n"
// #define sqr(x) ((x) * (x))
// #define sz(x) ((int)(x).size())
// #define all(x) x.begin(), x.end()
// #define rall(x) x.rbegin(), x.rend()
// #define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

// using namespace std;

// ll leftToRight(vector<ll> v)
// {
//     bool shouldContinue = true;

//     while (shouldContinue)
//     {
//         shouldContinue = false;

//         for (int i = 1; i < sz(v) - 1; ++i)
//         {
//             if (v[i] < v[i - 1] && v[i] < v[i + 1])
//             {
//                 v[i - 1] = v[i];
//                 v[i + 1] = v[i];
//                 shouldContinue = true;
//             }
//         }
//     }

//     ll sum = 0;
//     for (auto x : v)
//         sum += x;

//     return sum;
// }

// ll rightToLeft(vector<ll> v)
// {
//     bool shouldContinue = true;

//     while (shouldContinue)
//     {
//         shouldContinue = false;

//         for (int i = sz(v) - 2; i > 0; --i)
//         {
//             if (v[i] < v[i - 1] && v[i] < v[i + 1])
//             {
//                 v[i - 1] = v[i];
//                 v[i + 1] = v[i];
//                 shouldContinue = true;
//             }
//         }
//     }

//     ll sum = 0;
//     for (auto x : v)
//         sum += x;

//     return sum;
// }

// int main()
// {
//     fastIO();

//     int T;
//     cin >> T;

//     while (T--)
//     {
//         int N;
//         cin >> N;

//         vector<int> A(N);
//         for (int i = 0; i < N; i++)
//             cin >> A[i];

//         vector<int> valley(N, 0);

//         // Only original valleys can ever be used as centers of operations
//         for (int i = 1; i < N - 1; i++)
//         {
//             if (A[i] < A[i - 1] && A[i] < A[i + 1])
//                 valley[i] = 1;
//         }

//         long long ans = 0;

//         for (int i = 0; i < N; i++)
//         {
//             int cur = A[i];

//             // If i itself is a valley, it can never be changed.
//             // Otherwise, it can be changed by a valley immediately to its left/right.
//             if (i > 0 && valley[i - 1])
//                 cur = min(cur, A[i - 1]);

//             if (i + 1 < N && valley[i + 1])
//                 cur = min(cur, A[i + 1]);

//             ans += cur;
//         }

//         cout << ans << '\n';

//         return 0;
//     }

//     // #include <bits/stdc++.h>
//     // #define nl '\n'
//     // #define spc ' '
//     // #define imx INT_MAX
//     // #define imn INT_MIN
//     // #define llmx LLONG_MAX
//     // #define llmn LLONG_MIN
//     // #define ld long double
//     // #define ll long long int
//     // #define no cout << "NO\n"
//     // #define yes cout << "YES\n"
//     // #define sqr(x) ((x) * (x))
//     // #define sz(x) ((int)(x).size())
//     // #define all(x) x.begin(), x.end()
//     // #define rall(x) x.rbegin(), x.rend()
//     // #define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

//     // using namespace std;

//     // bool leftToRight(vector<ll> &v)
//     // {
//     //     bool flag = false;

//     //     for (int i = 1; i < sz(v) - 1; ++i)
//     //     {
//     //         if (v[i] < v[i - 1] && v[i] < v[i + 1])
//     //         {
//     //             v[i - 1] = v[i];
//     //             v[i + 1] = v[i];
//     //             flag = true;
//     //         }
//     //     }

//     //     return flag;
//     // }

//     // bool rightToLeft(vector<ll> &v)
//     // {
//     //     bool flag = false;

//     //     for (int i = sz(v) - 2; i >= 1; --i)
//     //     {
//     //         if (v[i] < v[i - 1] && v[i] < v[i + 1])
//     //         {
//     //             v[i - 1] = v[i];
//     //             v[i + 1] = v[i];
//     //             flag = true;
//     //         }
//     //     }

//     //     return flag;
//     // }

//     // ll sum(vector<ll> &v)
//     // {
//     //     ll total = 0;
//     //     for (auto x : v)
//     //         total += x;

//     //     return total;
//     // }

//     // int main()
//     // {
//     //     fastIO();

//     //     int tc;
//     //     cin >> tc;

//     //     while (tc--)
//     //     {
//     //         int n;
//     //         cin >> n;

//     //         vector<ll> v(n);
//     //         for (auto &i : v)
//     //             cin >> i;

//     //         bool shouldContinue = true;

//     //         while (shouldContinue)
//     //         {
//     //             shouldContinue = false;

//     //             vector<ll> lt = v;
//     //             vector<ll> rt = v;

//     //             bool leftChanged = leftToRight(lt);
//     //             bool rightChanged = rightToLeft(rt);

//     //             ll ltSum = sum(lt);
//     //             ll rtSum = sum(rt);

//     //             if (!leftChanged && !rightChanged)
//     //                 break;

//     //             if (ltSum <= rtSum)
//     //             {
//     //                 v = lt;
//     //                 shouldContinue = leftChanged;
//     //             }
//     //             else
//     //             {
//     //                 v = rt;
//     //                 shouldContinue = rightChanged;
//     //             }
//     //         }

//     //         cout << sum(v) << nl;
//     //     }

//     //     return 0;
//     // }

//     // ll leftToRight(vector<ll> v)
//     // {
//     //     bool shouldContinue = true;

//     //     while (shouldContinue)
//     //     {
//     //         shouldContinue = false;

//     //         for (int i = 1; i < sz(v) - 1; ++i)
//     //         {
//     //             if (v[i] < v[i - 1] && v[i] < v[i + 1])
//     //             {
//     //                 v[i - 1] = v[i];
//     //                 v[i + 1] = v[i];
//     //                 shouldContinue = true;
//     //             }
//     //         }
//     //     }

//     //     ll sum = 0;
//     //     for (auto x : v)
//     //         sum += x;

//     //     return sum;
//     // }

//     // ll rightToLeft(vector<ll> v)
//     // {
//     //     bool shouldContinue = true;

//     //     while (shouldContinue)
//     //     {
//     //         shouldContinue = false;

//     //         for (int i = sz(v) - 2; i > 0; --i)
//     //         {
//     //             if (v[i] < v[i - 1] && v[i] < v[i + 1])
//     //             {
//     //                 v[i - 1] = v[i];
//     //                 v[i + 1] = v[i];
//     //                 shouldContinue = true;
//     //             }
//     //         }
//     //     }

//     //     ll sum = 0;
//     //     for (auto x : v)
//     //         sum += x;

//     //     return sum;
//     // }

//     // int main()
//     // {
//     //     fastIO();

//     //     int tc;
//     //     cin >> tc;

//     //     while (tc--)
//     //     {
//     //         int n;
//     //         cin >> n;

//     //         vector<ll> v(n);
//     //         for (auto &i : v)
//     //             cin >> i;

//     //         // bool shouldContinue = true;

//     //         // while (shouldContinue)
//     //         // {
//     //         //     shouldContinue = false;
//     //         //     for (int i = 1; i < n - 1; ++i)
//     //         //     {
//     //         //         if (v[i] < v[i - 1] && v[i] < v[i + 1])
//     //         //         {
//     //         //             v[i - 1] = v[i];
//     //         //             v[i + 1] = v[i];
//     //         //             shouldContinue = true;
//     //         //         }
//     //         //     }
//     //         // }

//     //         // ll total = 0;
//     //         // for (auto x : v)
//     //         //     total += x;

//     //         // cout << total << nl;

//     //         cout << min(leftToRight(v), rightToLeft(v)) << nl;
//     //     }

//     //     return 0;
//     // }
