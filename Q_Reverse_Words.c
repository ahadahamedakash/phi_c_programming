// #include <stdio.h>

// int main()
// {
//     char arr[1000001];

//     fgets(arr, 18, stdin);

//     int first = 0;
//     int last = strlen(arr) - 1;

//         // while (first < last)
//     // {
//     //     char temp = arr[first];
//     //     arr[first] = arr[last];
//     //     arr[last] = temp;

//     //     first++, last--;
//     // }

//     // for (int i = 0; i < strlen(arr); i++)
//     // {
//     //     printf("%c", arr[i]);
//     // }

//     char newStr[1000001];

//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         char word[10000];
//         printf("%c\n", arr[i]);
//         while (arr[i] != ' ')
//         {
//             char word[10000];

//             word[i] += arr[i];
//         }

//         printf("WORD: %s", word);
//     }

//     return 0;
// }
