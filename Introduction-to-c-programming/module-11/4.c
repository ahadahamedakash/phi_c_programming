#include <stdio.h>
#include <stdbool.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    // int i = 0;

    // while (true)
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         // BOTH ARE EQUAL
    //         printf("%s", a);
    //         break;
    //     }
    //     else if (a[i] == '\0')
    //     {
    //         printf("%s", a);
    //         break;
    //     }
    //     else if (b[i] == '\0')
    //     {
    //         printf("%s", b);
    //         break;
    //     }
    //     else if (a[i] < b[i])
    //     {
    //         printf("%s", a);
    //         break;
    //     }
    //     else if (a[i] > b[i])
    //     {
    //         printf("%s", b);
    //         break;
    //     }
    //     else if (a[i] == b[i])
    //     {
    //         i++;
    //     }
    // }

    printf("%d", strcmp(a, b));

    return 0;
}