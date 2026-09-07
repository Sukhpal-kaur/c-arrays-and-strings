#include <stdio.h>

void changeValue(int x)
{
    x = 100;
    printf("Value inside function = %d\n", x);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Before function call = %d\n", num);

    changeValue(num);

    printf("After function call = %d", num);

    return 0;
}