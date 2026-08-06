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
//         int n;
//         cin >> n;

//         string s;
//         cin >> s;

//         int oneCnt, zeroCnt;
//         oneCnt = zeroCnt = 0;
//         for (char ch : s)
//         {
//             if (ch == '1')
//                 oneCnt++;
//             else
//                 zeroCnt++;
//         }

//         if (abs(oneCnt - zeroCnt) == n)
//         {
//             cout << -1 << nl;
//             continue;
//         }

//         int delZero, delOne;
//         delZero = delOne = 0;
//         string ans1 = "", ans2 = "";
//         bool flag1 = true, flag2 = false;

//         for (char ch : s)
//         {
//             if (flag1 && ch == '1')
//             {
//                 ans1 += ch;
//                 flag1 = !flag1;
//             }
//             else if (!flag1 && ch == '0')
//             {
//                 ans1 += ch;
//                 flag1 = !flag1;
//             }

//             if (flag2 && ch == '1')
//             {
//                 ans2 += ch;
//                 flag2 = !flag2;
//             }
//             else if (!flag2 && ch == '0')
//             {
//                 ans2 += ch;
//                 flag2 = !flag2;
//             }
//         }

//         int hasZeroAns1, hasOneAns1, hasZeroAns2, hasOneAns2;
//         hasZeroAns1 = hasOneAns1 = hasZeroAns2 = hasOneAns2 = 0;

//         for (char ch : ans1)
//         {
//             if (ch == '0')
//                 hasZeroAns1++;
//             else
//                 hasOneAns1++;
//         }

//         for (char ch : ans2)
//         {
//             if (ch == '0')
//                 hasZeroAns2++;
//             else
//                 hasOneAns2++;
//         }

//         int delZeroAns1 = zeroCnt - hasZeroAns1;
//         int delOneAns1 = oneCnt - hasOneAns1;

//         int delZeroAns2 = zeroCnt - hasZeroAns2;
//         int delOneAns2 = oneCnt - hasOneAns2;

//         cout << ans1 << " - " << ans2 << nl;
//     }

//     return 0;
// }
