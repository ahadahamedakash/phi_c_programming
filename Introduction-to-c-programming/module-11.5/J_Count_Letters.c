#include <stdio.h>

char s[10000001];

int main()
{
    scanf("%s", s);

    int arr[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        int digit = s[i] - 97;

        arr[digit]++;
    }

    char ch = 'a';
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            printf("%c : %d\n", ch, arr[i]);
        }
        ch++;
    }

    return 0;
}
