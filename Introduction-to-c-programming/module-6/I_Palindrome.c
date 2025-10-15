#include <stdio.h>

int main()
{
    long long int n;

    scanf("%lld", &n);
    long long int copy = n;

    long long int reverse = 0;

    while (copy != 0)
    {
        int digit = copy % 10;
        reverse = reverse * 10 + digit;
        copy /= 10;
    }

    if (n == reverse)
    {
        printf("%lld\n", reverse);
        printf("YES");
    }
    else
    {
        printf("%lld\n", reverse);
        printf("NO");
    }

    return 0;
}
