#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char s[1000001];

        scanf("%s", &s);
        // printf("%s", s);

        for (int j = 0; j < strlen(s) - 2; j++)
        {

            if (s[j] == '1')
            {
                if (s[j + 1] == '0')
                {

                    if (s[j + 2] == '1')
                    {
                        printf("Good\n");
                        break;
                    }
                }
            }
            else if (s[j] == '0')
            {
                if (s[j + 1] == '1')
                {
                    if (s[j + 2] == '0')
                    {
                        printf("Good\n");
                        break;
                    }
                }
            }
            else
            {
                printf("Bad\n");
                // break;
            }
        }
    }

    return 0;
}