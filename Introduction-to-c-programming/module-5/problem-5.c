#include <stdio.h>

int main()
{
    char n;
    scanf("%c", &n);

    if (n >= 48 && n <= 57)
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("ALPHA\n");
        if (n >= 97 && n <= 122)
        {
            printf("IS SMALL");
        }
        else if (n >= 65 && n <= 90)
        {
            printf("IS CAPITAL");
        }
    }

    return 0;
}

/*
    PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
*/