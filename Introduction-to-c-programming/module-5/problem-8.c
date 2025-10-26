#include <stdio.h>

int main()
{
    long long int a, b, c, d;

    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long x = ((a * b) - (c * d));

    printf("Difference = %lld", x);

    return 0;
}

/*
    PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D
*/
