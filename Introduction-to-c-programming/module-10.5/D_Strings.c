#include <stdio.h>
#include <string.h>

int main()
{
    char arrOne[1000001];
    char arrTwo[1000001];

    scanf("%s", arrOne);
    scanf("%s", arrTwo);

    int charInOne = strlen(arrOne);
    int charInTwo = strlen(arrTwo);

    printf("%d %d\n", charInOne, charInTwo);

    printf("%s%s\n", arrOne, arrTwo);

    printf("%c", arrTwo[0]);
    for (int i = 1; i < charInOne; i++)
        printf("%c", arrOne[i]);

    printf(" ");

    printf("%c", arrOne[0]);
    for (int i = 1; i < charInTwo; i++)
        printf("%c", arrTwo[i]);

    printf("\n");

    return 0;
}
