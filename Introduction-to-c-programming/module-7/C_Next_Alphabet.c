#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch >= 97 && ch < 122)
    {
        printf("%c", ch + 1);
    }
    else if (ch == 122)
    {
        printf("a");
    }

    return 0;
}

/*
    PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C
*/
