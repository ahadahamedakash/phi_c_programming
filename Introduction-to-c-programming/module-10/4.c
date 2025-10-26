#include <stdio.h>
#include <string.h>

int main()
{
    char arr[50];

    scanf("%s", &arr);

    // COUNT STRING CHARATER MANUALLY
    // int count = 0;

    // for (int i = 0; arr[i] != '\0'; i++)
    // {
    //     count++;
    // }

    // printf("%d", count);

    int size = strlen(arr);

    printf("%d", size);

    return 0;
}