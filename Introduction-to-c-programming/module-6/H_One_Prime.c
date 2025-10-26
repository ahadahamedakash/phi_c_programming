#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;

    scanf("%d", &n);

    bool isPrime = true;

    if (n == 2)
    {
        isPrime = true;
    }
    else if (n > 2)
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
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
