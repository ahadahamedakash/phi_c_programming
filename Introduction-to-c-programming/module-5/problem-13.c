#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int copy = n;

    int years, months, days;

    years = n / 365;
    months = (n % 365) / 30;
    days = (n % 365) % 30;

    printf("%d years\n%d months\n%d days", years, months, days);

    return 0;
}

/*
    PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R
*/