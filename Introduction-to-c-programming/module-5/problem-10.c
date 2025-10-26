#include <stdio.h>

int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long int lastTwoDigit = (a * b * c * d) % 100;
    printf("%lld", lastTwoDigit);

    return 0;
}

// #include <stdio.h>
 
// int main()
// {
//     long long int a, b, c, d;
//     scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
 
//     int lastTwoDigit = c % 100;
 
//     lastTwoDigit = (lastTwoDigit * (b % 1000)) % 1000;
 
//     lastTwoDigit = (lastTwoDigit * (c % 1000)) % 1000;
 
//     lastTwoDigit = (lastTwoDigit * (d % 1000)) % 1000;
 
//     printf("%02d", lastTwoDigit % 100);
// }
