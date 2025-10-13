#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;

    scanf("%d", &n);

    bool isPrime = false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }

        isPrime = true;
    }

    if (isPrime)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
