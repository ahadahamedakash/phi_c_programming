#include <stdio.h>

int main()
{
    char arr[50];
    // char arr[50] = "AHAD AHAMED AKASH"; // STRING INITIALIZATION

    // gets(arr); // DOESN'T EFFECTED WITH ENTER
    fgets(arr, 18, stdin); // ENDS TAKING INPUT WHILE GET ENTER (ALSO TAKE ENTER AS INPUT)
    scanf("%c", &arr);

    printf("%s\n", arr);

    return 0;
}