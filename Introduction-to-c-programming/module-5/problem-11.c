#include <stdio.h>

int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    long long int sum = ((a % 10) + (b % 10));

    printf("%lld", sum);

    return 0;
}

/*
    PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F
*/
