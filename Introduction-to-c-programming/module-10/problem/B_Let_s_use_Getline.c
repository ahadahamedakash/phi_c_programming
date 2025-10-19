#include <stdio.h>

int main()
{
    int n = 1000001;

    char arr[n];

    fgets(arr, n, stdin);

    for (int i = 0; arr[i] != '\\'; i++)
    {
        printf("%c", arr[i]);
    }

    return 0;
}
