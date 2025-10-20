#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char arr[1000001];
    scanf("%s", arr);

    bool isPalindrome = true;

    int start = 0;
    int end = strlen(arr) - 1;

    while (start < end)
    {
        if (arr[start] != arr[end])
        {
            isPalindrome = false;
            break;
        }

        start++;
        end--;
    }

    if (isPalindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
