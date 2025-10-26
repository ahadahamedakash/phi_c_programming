#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], b[101];

    scanf("%s %s", &a, &b);

    /*
        MANUALLY CONCAT
    */
    // int lengthA = strlen(a);
    // int lengthB = strlen(b);

    // for (int i = 0; i <= lengthB; i++)
    // {
    //     a[i + lengthA] = b[i];
    // }

    strcat(a, b);

    printf("%s %s", a, b);

    return 0;
}