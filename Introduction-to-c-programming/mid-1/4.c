#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char arr[10001];
        scanf("%s", arr);

        int smallAlpha = 0;
        int capitalAlpha = 0;
        int neumaric = 0;

        for (int i = 0; arr[i] != '\0'; i++)
        {
            if (arr[i] >= 'a' && arr[i] <= 'z')
            {
                smallAlpha++;
            }
            else if (arr[i] >= 'A' && arr[i] <= 'Z')
            {
                capitalAlpha++;
            }
            else if (arr[i] >= '0' && arr[i] <= '9')
            {
                neumaric++;
            }
        }

        printf("%d %d %d\n", capitalAlpha, smallAlpha, neumaric);
    }

    return 0;
}