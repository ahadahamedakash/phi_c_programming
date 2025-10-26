// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     if (n == 1)
//     {
//         printf("-1");
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n == 1)
    {
        printf("-1");
    }

    for (int i = 2; i <= n; i += 2)
    {

        printf("%d\n", i);
    }

    return 0;
}

/*
    PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B
*/
