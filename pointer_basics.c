#include <stdio.h>

int main()
{
    int num;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &num;

    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", (void *)&num);
    printf("Value stored in pointer = %p\n", (void *)ptr);
    printf("Value pointed to by pointer = %d", *ptr);

    return 0;
}