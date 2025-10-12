#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z')
    {
        c = c - 32;
        printf("%c", c);
    }
    else
    {
        c = c + 32;
        printf("%c", c);
    }

    return 0;
}

/*
    PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
*/
