#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("PUM\n");
        num++;
    }

    return 0;
}
