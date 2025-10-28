#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int p1, p2, d1;

        scanf("%d %d %d", &p1, &p2, &d1);

        int singlePersonCanDo = p1 * d1;

        int totalPersonCanDoInDays = singlePersonCanDo / (p1 + p2);

        int differenceInDay = d1 - totalPersonCanDoInDays;

        printf("%d\n", differenceInDay);
    }

    return 0;
}
