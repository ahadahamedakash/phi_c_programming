#include <stdio.h>
#include <string.h>

int main()
{
    char x[10001];

    scanf("%s", x);

    int y[26] = {0};

    for (int i = 0; x[i] != '\0'; i++)
    {
        y[x[i] - 'a']++;
    }

    char ch = 'a';

    for (int i = 0; i < 26; i++)
    {
        if (y[i] != 0)
        {
            printf("%c - %d\n", ch, y[i]);
        }

        ch++;
    }

    return 0;
}
