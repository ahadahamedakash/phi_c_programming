#include <stdio.h>

int main()
{
    double x, p;

    scanf("%lf %lf", &x, &p);

    double originalPrice = (p * 100.0) / (100.0 - x);

    printf("%.2f", originalPrice);

    return 0;
}

/*
    PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A
*/
