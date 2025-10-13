#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char ch = 'A';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
        ch++;
    }

    return 0;
}

/*
    INPUT
    6
*/

/*
    OUTPUT
    A
    BB
    CCC
    DDDD
    EEEEE
    FFFFFF
*/