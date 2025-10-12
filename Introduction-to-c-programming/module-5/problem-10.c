#include <stdio.h>

int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long int lastTwoDigit = (a * b * c * d) % 100;
    printf("%lld", lastTwoDigit);

    return 0;
}