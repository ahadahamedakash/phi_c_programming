#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char s[1000001];

        scanf("%s", s);

        int isGood = false;

        for (int j = 0; j < strlen(s) - 2; j++)
        {
            if ((s[j] == '1' && s[j + 1] == '0' && s[j + 2] == '1') || (s[j] == '0' && s[j + 1] == '1' && s[j + 2] == '0'))
            {
                printf("Good\n");
                isGood = true;
                break;
            }
        }

        if (!isGood)
        {
            printf("Bad\n");
        }
    }

    return 0;
}
