#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int first = n % 10;
    int second = n / 10;

    if (first % second == 0 || second % first == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}

/*
    PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I
*/
