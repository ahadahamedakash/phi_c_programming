#include <stdio.h>

int main()
{
    double pi = 3.141592653;

    double r;
    scanf("%lf", &r);

    double area = pi * r * r;

    printf("%.9f", area);

    return 0;
}

/*
    PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E
*/
