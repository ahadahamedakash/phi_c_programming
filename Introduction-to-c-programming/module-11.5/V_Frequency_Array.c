#include <stdio.h>

int main()
{
    int num, range;

    scanf("%d %d", &num, &range);

    int arr[num];

    int arrTwo[100001] = {0};

    for (int i = 0; i < num; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < num; i++)
    {
        int number = arr[i] - 1;
        arrTwo[number]++;
    }

    for (int i = 0; i < range; i++)
        printf("%d\n", arrTwo[i]);

    return 0;
}
