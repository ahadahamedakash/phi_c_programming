#include <stdio.h>

int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    printf("%lld + %lld = %lld\n", a, b, (a + b));
    printf("%lld * %lld = %lld\n", a, b, (a * b));
    printf("%lld - %lld = %lld\n", a, b, (a - b));

    return 0;
}

/*
    PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C
*/