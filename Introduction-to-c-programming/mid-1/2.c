#include <stdio.h>
#include <string.h>

int main()
{
    char chArr[100001];
    scanf("%s", chArr);

    char voArr[5] = {'a', 'e', 'i', 'o', 'u'};

    int count = 0;

    for (int i = 0; i < strlen(chArr); i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (chArr[i] == voArr[j])
            {
                count++;
            }
        }
    }

    int totalCon = (strlen(chArr) - count);

    printf("%d", totalCon);

    return 0;
}
