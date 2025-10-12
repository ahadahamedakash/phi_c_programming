#include <stdio.h>

int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long int lastTwoDigit = (a * b * c * d) % 100;
    printf("%lld", lastTwoDigit);

    // long long int lastTwoDigit = (((a % 100) * (b % 100) % 100) * (c % 100) % 100);

    // lastTwoDigit = (lastTwoDigit * (d % 100) % 100);

    // printf("%

    return 0;
}