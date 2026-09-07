#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, vowels = 0;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' ||
            str[i] == 'i' || str[i] == 'o' ||
            str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' ||
            str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U')
        {
            vowels++;
        }

        i++;
    }

    printf("Number of vowels = %d", vowels);

    return 0;
}