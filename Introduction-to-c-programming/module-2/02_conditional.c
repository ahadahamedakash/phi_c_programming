#include <stdio.h>

int main()
{
    int age;
    scanf("%d", &age);

    if (age < 18)
    {
        printf("You can't vote!");
    }
    else
    {
        printf("You can give a vote!");
    }

    /*
        if(condition){
            code
        } esle if(condition) {
            code
        } else {
            code
        }
    */

    return 0;
}