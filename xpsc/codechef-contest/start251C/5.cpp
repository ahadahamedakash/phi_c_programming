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

// int main()
// {
//     fastIO();

//     int tc;
//     cin >> tc;

//     while (tc--)
//     {
//         ll n, k;
//         cin >> n >> k;

//         vector<ll> v(n);

//         for (auto &i : v)
//             cin >> i;

//         sort(all(v));

//         int mxElem = *max_element(all(v));

//         vector<int> freq(mxElem + n + 2, 0);

//         for (auto val : v)
//             freq[val]++;

//         ll total = 0;

//         for (int i = 1; i <= mxElem + n; ++i)
//         {
//             if (freq[i] > 1)
//             {
//                 int x = freq[i] - 1;

//                 freq[i] = 1;
//                 freq[i + 1] += x;

//                 total += x;
//             }
//         }

//         ll mx = 0;
//         ll prev = v[0];

//         for (int i = 1; i < n; i++)
//         {
//             ll x = max(v[i], prev + 1);

//             mx = max(mx, x - v[i]);

//             prev = x;
//         }

//         ll ans = max(mx, (total + k - 1) / k);

//         cout << ans << nl;
//     }

//     return 0;
// }