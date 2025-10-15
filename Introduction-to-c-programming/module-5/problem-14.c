#include <stdio.h>

int main()
{
    float n;

    scanf("%f", &n);

    if (n == (int)n)
    {
        printf("int %d", (int)n);
    }
    else
    {
        int intN = (int)n;
        double fracN = n - intN;

        printf("float %d %.3f", intN, fracN);
    }

    return 0;
}
