#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    bool isPalindrome = true;

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            isPalindrome = false;
            break;
        }
    }

    printf(isPalindrome ? "YES" : "NO");

    return 0;
}
