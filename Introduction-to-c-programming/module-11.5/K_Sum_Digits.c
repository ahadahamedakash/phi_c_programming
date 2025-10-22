#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char arr[n + 1];
    scanf("%s", arr);

    long long int sum = 0;

    int length = strlen(arr);

    for (int i = 0; i < length; i++)
        sum += arr[i] - '0';

    printf("%lld", sum);

    return 0;
}
