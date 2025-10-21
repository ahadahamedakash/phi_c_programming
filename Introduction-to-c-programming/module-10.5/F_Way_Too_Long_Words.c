#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char arr[1000001];

        scanf("%s", &arr);

        int size = strlen(arr);

        if (size > 10)
        {
            printf("%c", arr[0]);
            printf("%zu", size - 2);
            printf("%c\n", arr[size - 1]);
        }
        else
        {
            printf("%s\n", arr);
        }
    }

    return 0;
}
