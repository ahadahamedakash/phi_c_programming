#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], b[101];

    scanf("%s %s", a, b);

    int maxLength = strlen(a) > strlen(b) ? strlen(a) : strlen(b);

    for (int i = 0; i < maxLength; i++)
    {

        if (a[i] == '\0')
        {
            printf("%s", a);
            return 0;
        }
        if (b[i] == '\0')
        {
            printf("%s", b);
            return 0;
        }

        if (a[i] > b[i])
        {
            printf("%s", b);
            return 0;
        }
        else if (a[i] < b[i])
        {
            printf("%s", a);
            return 0;
        }
    }

    printf("%s", a);

    return 0;
}