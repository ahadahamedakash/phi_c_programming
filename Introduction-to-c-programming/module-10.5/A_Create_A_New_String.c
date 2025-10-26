#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    char s1[1000001];
    char s2[1000001];

    scanf("%s %s", s1, s2);

    printf("%d %d\n", strlen(s1), strlen(s2));
    printf("%s %s", s1, s2);

    return 0;
}
